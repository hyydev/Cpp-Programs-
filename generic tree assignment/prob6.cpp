
//prob6 : there is two tree we have check they are  structurally idendical or not return true and false  

#include<iostream>
#include<vector>
#include<queue>
using namespace std; 
template<typename T> 

class node{
    public:
    int data ;
    int *next ;

    node(T data){
        this->data =data ;
        next =NULL ;
    }

};
template<typename T>
class treenode{
    public :
    T data ;
    vector<treenode*>children ;

    treenode( T data){
        this->data =data ;

    }



};

treenode<int>* takeinput(){
    int rootdata ;
    cout<<" enter the root data "<<endl ;
    cin>>rootdata ;
    treenode<int>*root =new treenode<int>(rootdata) ;
    queue<treenode<int>*>pending_node ;
    pending_node.push(root);
    while(pending_node.size()!=0){
        treenode<int>*front =pending_node.front() ;
        pending_node.pop() ;
        int numchild ;
        cout<<" enter no. of chidren of"<<front->data<<endl;
        cin>>numchild ;
        for(int i =0 ;i<numchild;i++){
            int childdata ;
            cout<<" enter the  " << i <<" th child of "<<front->data ;
            cin>>childdata ;
            treenode<int>*child =  new treenode<int>(childdata) ;
            front->children.push_back(child) ;
            pending_node.push(child);

        }


    }
    return root ;


}

void printnode(treenode<int>*root){
    if(root==NULL){             //  <---  this is not a base case it is the edge case ;
                                // in generic tree we dont need of base case ;
        return ;
    }
    queue<treenode<int>*> pending ;
     pending.push(root);
    while(pending.size()!=0){
        treenode<int>*front =pending.front() ;
        cout<<front->data <<" :" ;
        pending.pop() ;
        for(int i =0 ;i<front->children.size();i++){
            cout<<front->children[i]->data<<" ," ;
            pending.push(front->children[i]) ;
        }
        cout<<endl ;
    }
       
        
    
}
bool areIdentical(treenode<int> *root1, treenode<int> * root2) {
    // Write your code here
    if(root1==NULL && root2==NULL){
        return true ;
    }
    if(root1==NULL && root2!=NULL || root1!=NULL && root2==NULL){
        return false ;
    }
    if(root1->data !=root2->data || root1->children.size()!=root2->children.size() ){
        return false ;
    }
    for(int i =0 ;i<root1->children.size();i++){
        areIdentical(root1->children[i],root2->children[i]) ;
    }
    return true ;
}
int main(){



 
 
 
 
 treenode<int>* root1 = takeinput();
    treenode<int>* root2 = takeinput();
    cout << (areIdentical(root1, root2) ? "true" : "false");
}