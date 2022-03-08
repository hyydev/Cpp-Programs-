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


node*removeDuplicates(node*head){
    if(head!=NULL){
        return head ;
    }
    node*temp =head ;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next ;

        }else{
            temp=temp->next ;
        }
    }
    return head ;
}
int main(){
    int t ;
    cin>>t ;
    while(t--){
    node*head =takeinput() ;
    print(head) ;
    cout<<endl ;
    head=removeDuplicates(head) ;
    print(head) ;

    }
}