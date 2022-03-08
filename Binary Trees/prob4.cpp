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
         cout<<front->data<<":" ;
         pendingnode.pop() ;
          pendingnode.push(front->left) ;
          pendingnode.push(front->right) ;
          cout<<"L:"<<front->left->data<<","<<"R:"<<front->right->data ;
          cout<<endl ;
          

     }
     

 }

 pair<int,int> getMinAndMax(binarytreenode<int>*root){
     
	// Write your code here
    pair<int,int> ans =make_pair(INT_MAX,INT_MIN);/* stl use hua hai*/
    if(root==NULL){
        
        return ans ;
    }
    pair<int,int> childleft =getMinAndMax(root->left) ;
    pair<int,int>childright=getMinAndMax(root->right) ;
    
    ans.second =max(max(childleft.first,childright.first), root->data );
    ans.first =min(min(childleft.second,childright.second), root->data );
    return ans ;
}

 

 int main(){
     binarytreenode<int>*root =takeinput_levelwise() ;
     pair<int,int> ans =getMinAndMax(root) ;
     cout<<ans.first<<" "<<ans.second ;
     
 }