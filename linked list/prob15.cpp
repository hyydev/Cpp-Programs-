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

    node*reverse(node*head ){
        if(head==NULL||head->next==NULL){
            return head ;

        }
        
        node*smallans =reverse(head->next) ;
        node*tail =smallans ;

        while(tail->next!=NULL){
            tail=tail->next ;

        }
        tail->next=head ;
        head->next=NULL ;
        

        return smallans ;

    }

    int main(){
        int t ;
        cin>>t ;
        while(t--){
            node*head =takeinput();
            head=reverse(head) ;
            print(head) ;
            
        }
    }