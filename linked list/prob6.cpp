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
    int length(node* head){
    int count=0;
    while(head != NULL){
        head = head->next;
        count++;
    }
    
    return count;
}

    node*insertnode(node*head,int i,int data){
        int len =length(head) ;
          if(i>len){
              return head ;

          }
        if(head==NULL){
            if(i==0){
                node*newnode=new node(data) ;
                return newnode ;
            }
        }
        if(i==0){
            node*newnode =new node(data);
            newnode->next =head ;
            head=newnode ;
            return head ;
        }
        head->next=insertnode(head->next,i-1,data) ;
        return head ;

        
        
    }
    int main(){
        int t ;
        cin>>t ;
        node*head =takeinput() ;
        print(head) ;
        int i ;
        cin>>i ;
        int data ;
        cin>>data ;
        head =insertnode(head,i,data );
        print(head) ;

    }