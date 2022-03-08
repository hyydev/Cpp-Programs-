/* tree class implementation , tree object and its childhren  implementation and 
how we  connect and store children address ,print the tree recursively ;*/

#include<iostream>
#include<vector>
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
    ~treenode(){
        for(int i =0 ;i<children.size();i++)
{

delete children[i] ;
}    }



};
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
int main(){
    treenode<int>*root =new treenode<int>(1);
    treenode<int>*node1=new treenode<int>(2) ;
    treenode<int>*node2=new treenode<int>(3) ;

    root->children.push_back(node1);
    root->children.push_back(node2);

    printnode(root) ;
    delete root ;


    
    
}
