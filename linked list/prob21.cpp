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

    node*K_reverse(node*head ,int k){
        if(k==0 || k==1){
            return head ;

        }
        node*current =head ;
        node*next =NULL ;
        node*pre =NULL ;
        int count = 0 ;
        while (count <k && current !=NULL){
            next =current ->next ;
            current ->next =pre ;
            pre =current ;
            current =next ;
            count ++ ;
        }

        if(next != NULL){
           head->next = K_reverse(next ,k) ;
        }
        return pre ;

        
    }
    int main(){
        int t ;
        cin>>t ;
        while(t--){
            node *head =takeinput() ;
            int k ;
            cin>> k ;
           head = K_reverse(head ,k) ;
            print(head ) ;
        }
    }