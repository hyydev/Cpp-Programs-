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

    node*deletenode(node*head ,int i){
        node*temp =head ;
        if(i==0){
            return head->next ;
            

        }
        int count =0 ;
        while(temp!=NULL&&count<i-1){
            temp=temp->next ;
            count++;
        }
        if(temp==NULL || temp->next==NULL){
            return head ;
        }
        temp->next = temp->next->next ;
    
    
        return head ;
    }

    int main(){
        int t ;
        cin>>t ;
        while(t--){
           node* head=takeinput();
           print(head);
           int i ;
           cin>>i ;
           head =deletenode(head,i) ;
           print(head) ;
           

        }
    }