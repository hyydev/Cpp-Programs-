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

    int findnode(node*head,int n){
        node*temp =head ;
        int count =0 ;
        while(temp!=NULL){ 
        if(temp->data==n){
            return count ;
        }
        count ++;
        temp =temp->next ;
    }

    return -1 ;
    }

    int main() {
        int t ;
        cin>>t ;
        while(t--){
            node*head =takeinput();
            print(head) ;
            int n ;
            cin>>n ;
           cout<< findnode(head,n);

        }
    }