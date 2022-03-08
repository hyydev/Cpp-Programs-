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
        node*temp =head ;
        
        node*smallans =reverse(temp->next) ;
        
        temp->next =head ;
        head->next =NULL ;
    

        return smallans ;

    }

    bool ispalindrome(node* head){
        if(head==NULL||head->next==NULL){
            return true ;
        }
        node*slow =head ;
        node*fast =head->next ;
        while(fast!=NULL||fast->next !=NULL){
            slow=slow->next ;
            fast =fast->next->next ;

        }
        slow->next = reverse(slow->next) ;
        slow=slow->next ;
        while(slow!=NULL){
            if(slow->data !=head->data)
                return false ;
            
                slow =slow->next ;
                head =head->next ;
            
            
        }
        return true ;
       
    }
     int main(){
         int t ;
         cin>>t ;
         while(t--){
             node*head =takeinput() ;
             bool ans = ispalindrome(head) ;
             if (ans) cout<<"true" ;
             else cout<<" false" ;
         }
     }