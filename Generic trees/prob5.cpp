//  return maximum data of a node and height of the generic tree ;


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

treenode<int>*max_node(treenode<int>*root){
    if(root==NULL){
        return root ;

    }
    treenode<int>*max =root ;

    for(int i =0 ;i<root->children.size();i++){
        treenode<int>*maxchild = max_node(root->children[i]) ;
    
    if(maxchild->data > max->data){
        max =maxchild ;
    }

    }
    return max; 
}

int getheight(treenode<int>*root){
    int h =1 ;
    for(int i =0 ;i<root->children.size();i++){ 
        int child_height = 1+getheight(root->children[i]);
        if(child_height>h){
            h =child_height ;
        }
    }
    return h ;
}




int main(){
    treenode<int>*root = takeinput() ;
    printnode(root) ;
    treenode<int>*ans =max_node(root) ;
    cout<<ans->data<<endl ;
    int h =getheight(root) ;
    cout<<h <<endl ;


}
