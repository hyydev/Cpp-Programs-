/* take a input and print input levelwise */ 
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
/* take a input levelewise*/
 binarytreenode<int>* takeinput_levelwise(){
     int rootdata ;
     cout<<" enter the root data"<<endl; 
     cin>>rootdata ;
     binarytreenode<int>*root =new binarytreenode<int>(rootdata) ;
     if(root->data==-1){
         return NULL ;
     }
     queue<binarytreenode<int>*> pendingnodes ;
     pendingnodes.push(root) ;
     while(pendingnodes.size()!=0){
         binarytreenode<int>*front =pendingnodes.front() ;
         pendingnodes.pop();

         cout<<" enter left child of"<<front->data<<endl ;
         int leftchild_data  ;
         cin>>leftchild_data ;
         if(leftchild_data !=-1){
             binarytreenode<int>*child=new binarytreenode<int>(leftchild_data) ;
             front->left =child ;
             pendingnodes.push(child) ;

         }
           cout<<" enter right child of"<<front->data<<endl ;
         int rightchild_data  ;
         cin>>rightchild_data ;
         if(rightchild_data !=-1){
             binarytreenode<int>*child=new binarytreenode<int>(rightchild_data) ;
             front->right =child ;
             pendingnodes.push(child) ;

         }
     }
     return root ;
 }

 /* print the tree levelwise */ 

 void printbinarytree_levelwise(binarytreenode<int>*root){
     if(root==NULL){
         return ;
     }
     queue<binarytreenode<int>*> pendingnode ;
     pendingnode.push(root);
      while(pendingnode.size()!=0){
         binarytreenode<int>*front = pendingnode.front() ;
        
         pendingnode.pop() ;
         
         if(front == NULL){
             cout<<endl ;
             if(pendingnode.size()!=0){
                 pendingnode.push(NULL) ;
             }
         }else{
              cout<<front->data<<":" ;
             cout<<"L:" ;
              if(front->left){ 
              pendingnode.push(front->left) ;
              cout<<front->left->data<<"," ;
         }else {
             cout<<"-1"<<"," ;
         }
             
             cout<<"R:" ;
         if(front->right){
             pendingnode.push(front->right) ;
        cout <<front->right->data<<endl ;
             
         }else{
              cout <<"-1"<<endl;
             
         }
          

        }
     
     } 

 }
 int getSum(binarytreenode<int>* root) {
    // Write your code here
    if(root==NULL){
        return 0 ;
    }
    int sum =root->data ;
    
 
     int leftsum = getSum(root->left) ;
     int rightsum = getSum(root->right) ;
    return sum +leftsum +rightsum ;
}


 int main(){
     binarytreenode<int>*root =takeinput_levelwise() ;
     printbinarytree_levelwise(root) ;
     int sum = 
 }
