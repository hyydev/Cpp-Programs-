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

    void printIthnode(node*head,int i){
        int pos =0 ;
        if(i==0){
            cout<<head->data<<endl;
        }
        node*temp =head ;
        while(pos!=i){
            temp =temp->next ;
            pos++;
        }
        cout<<temp->data<<endl ;

    }
    int main(){
        int t ;
        cin>>t ;
        while(t--){
            int pos ;
            cin>>pos ;
            node*head =takeinput(); 
            printIthnode(head,pos) ;
        }
    }