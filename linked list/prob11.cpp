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


int length(node*head){
    int count=0 ;
    while(head!=NULL){
        head=head->next ;
        count++ ;
    }
}
    node*appent(node*head,int n){
        node*temp =head ;
        int len =length(head);
        int pos =1 ;
        if(head==NULL){
            return head ; 
        }
        
        while(temp!=NULL && pos<len){
            temp=temp->next ;
            pos++ ;

        }
        node*last =temp->next ;
        temp =head ;
        int count =1 ;
        while(temp!=NULL &&count<n-1){
            temp =temp->next ;
            count ++ ;
        }
        node*a =temp->next ;
        temp->next =NULL ;
        last->next=head ;
        head =a ;
        return head ;




    }
    int main(){
        int t ;
        cin>>t ;
        while(t--){
            node*head =takeinput();
            print(head);
            int n ;
            cin>>n ;
            head =appent(head,n) ;
            print(head) ;
        }
    }
    



