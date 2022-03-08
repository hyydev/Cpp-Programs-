#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    node*next =NULL ;
    node(int data){
        this->data =data ;
        this->next =NULL;
    }
 };

    node*takeinput(){
        int data ;
        cin>>data;
        node*head=NULL;
        node*tail=NULL;
        while(data!=-1){
            node*new_node =new node(data);
            
            if(head==NULL){
                head=new_node;
                tail=new_node;
            }
            else{
                tail->next =new_node ;
                tail =new_node ;
            }
            cin>>data ;
        }
        return head ;

    }
     void print(node*head){
        node*temp =head ;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp =temp->next ;

        }
    }
    node*insertNode(node*head,int i,int data){
        node*newnode=new node(data);
        node*temp =head ;
        int count =0 ;
        if(i==0){
            newnode->next=head ;
            head =newnode ;
            return head ;
        }
        while(temp!=NULL&&count<i-1){
            temp =temp->next ;
            count++ ;
        }
        if(temp!=NULL){
            node*a=temp->next ;
            temp->next =newnode;
            newnode->next=a;
        }
        return head ;
    }


    
    int main(){
        int t ;
        cin>>t ;
        while(t--){
           
            
            
            node*head =takeinput();
            print(head) ;
             int i ;
            cin>>i ;
            int data ;
            cin>>data ;
 
            head =insertNode(head,i,data) ;
            print(head ) ;
            
        }
    }