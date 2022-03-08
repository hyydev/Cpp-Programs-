// take a input from the user 
#include<iostream>
using namespace std ;
#include<vector>
template<typename t >
class node{
    public:
    t data ;
     t *next ;
     node(){
         this ->data =data ;
         next =NULL ;
     }


};
template<typename t >
class treenode{
    public:
    t data ;
    vector<treenode*>children ;

    treenode(t data){
        this->data =data ;
    
    }

};
    treenode<int>* takeinput(){
        
        int data ;
        cout<<" enter your rootdata"<< endl ;
        cin>>data ;
        treenode<int>*root =new treenode<int>(data) ;

        int n ;
        cout<<"enter num of chilhren of"<< data<<endl;
        cin>>n ;
        for(int i =0 ;i<n ;i++){  

        treenode<int>*child =takeinput();
        root->children.push_back(child) ;

        }

     
     return root ;

        
    }
    void printnode(treenode<int>*root){
    if(root==NULL){             //  <---  this is not a base case it is the edge case ;
                                // in generic tree we dont need of base case ;
        return ;
    }
    cout<<root->data <<" :" ;
    for(int i =0 ;i<root->children.size();i++){
        cout<<root->children[i]->data << " ," ;

    }
    cout<<endl ;
    for(int i =0 ;i<root->children.size();i++){
        printnode(root->children[i]);
    }
}




int main() {

    treenode<int>*root =takeinput() ;
    printnode(root) ;



}

