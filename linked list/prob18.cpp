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
   
   node*swapNodes(node*head ,int i ,int j){
       if(head==NULL||i==j||head->next){
           return head ;
       }
       node*temp ;
       node*temp1 =head ;
       node*temp2 =head ;
       int count1 =0 ;
    
       while(count1!=i-1){
           temp1=temp1->next;
           count1++ ;
       }

         int count2 =0 ;
        while(count2!=j-1){
           temp2=temp2->next;
           count2++ ;
       }
       temp =temp1->next ;
       temp1->next =temp2->next ;
       temp2->next =temp ;

        temp =temp1->next->next ;
       temp1->next->next =temp2->next->next ;
       temp2->next->next =temp ;

       
         return head ;



       
   }
   int main(){
       int t ;
       cin>>t ;
       while(t--){
           node*head =takeinput() ;
           int i ,j ;
           cin>>i>>j ;
           head =swapNodes(head,i ,j) ;
           print(head) ;
       }
   }