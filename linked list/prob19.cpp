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

    node*deleteNode(node*head ,int n){
        node*temp =head ;
        int count =0;
        while(count<n){
            temp->next =temp->next->next ;
            count++ ;

        }
        return temp ;
    }

    node*skipnodes(node*head,int m,int n){
        if(head==NULL||head->next==NULL){
            return head ;

        }
            if(m==0||n==0){
                return head ;
            }

        node*temp =head ;
        while(temp->next !=NULL){
            int count =1;
            while(count<m){
                temp =temp->next ;
                count++ ;
            }
            temp =deleteNode(temp,n) ;
        }
        return head ;
            
        
    }
    int main(){
        int t ;
        cin>>t ;
        node*head =takeinput();
        int m ,n ;
        cin>>m>>n ;
        head =skipnodes(head,m,n) ;
        print(head) ;
    }