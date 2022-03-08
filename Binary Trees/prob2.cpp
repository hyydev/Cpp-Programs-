/* take an input and print the input recursively ;*/ 

#include<iostream>
#include<queue>
using namespace std ;

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

 /*take a input recursively */

binarytreenode<int>*takeinput(){
    
    int rootdata ;
    cout<<"enter data"<<endl ;
    cin>>rootdata ;
    if(rootdata==-1){
        return NULL ;
    }
    binarytreenode<int>*root =new binarytreenode<int>(rootdata) ;
    binarytreenode<int>*leftchild =takeinput() ;
    binarytreenode<int>*rightchild =takeinput() ;

    root->left =leftchild;
    root->right= rightchild ;

    return root ;
    

}

void printbinarytree(binarytreenode<int>*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<":" ;
    if(root->left!=NULL){
        cout<<"L:"<<root->left->data<<"," ;
    }

     if(root->right!=NULL){
        cout<<"R:"<<root->right->data ;
    }

    cout<<endl ;

    printbinarytree(root->left);
    printbinarytree(root->right);


}


int main(){
    binarytreenode<int>*root = takeinput() ;
    printbinarytree(root) ;
    delete root ;
}



