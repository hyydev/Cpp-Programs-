/* Binary tree class */
#include<iostream>
#include<queue>
using namespace std ;
 template <typename T>
 class node {
     public :
     T data ;
     int*next ;

     node(T data){
         this->data =data ;
         this->next =NULL ;
     }

 };
 template <typename T>

 class binarytreenode {
     public:
     T data ;
     binarytreenode<T>*left ;
     binarytreenode<T>*right ;

     binarytreenode(T data){
         this->data =data ;
         left =NULL ;
         right=NULL;
     }

     ~binarytreenode(){
         delete left ;
         delete right ;
     }

     

 };


 int main(){
     
     binarytreenode<int>*root = new binarytreenode<int>(1) ;
     binarytreenode<int>*node1= new binarytreenode<int>(1) ;
     binarytreenode<int>*node2 = new binarytreenode<int>(1) ;

     root->left =node1 ;
     root->right= node2 ;

 }
