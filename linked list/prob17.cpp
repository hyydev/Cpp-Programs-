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

    int FindNodeRec(node*head ,int n){
        if(head==NULL){
            return -1 ;
        }else if(head->data ==n){
            return 0 ;
        }

        int count = FindNodeRec(head->next,n) ;
        if(count!=-1){
            return count +1 ;

        }else{
            return -1 ;
        }
    }
    int main(){
        int t ;
        cin>>t ;
        while(t--){

            node*head =takeinput();
            int n ;
            cin>>n ;
            cout<<FindNodeRec(head,n);
        }
    }