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
    return count ;
}

 node *midpoint(node*head){
        if(head==NULL ||head->next ==NULL){
            return head ;
        
        }
        node *slow =head ;
        node *fast =head ->next ;
        while(fast!=NULL &&fast ->next!=NULL){
            slow =slow ->next ;
            fast =fast ->next->next ;
        }
        return slow;
    }



    node *mergeTwoSortedLinkedLists(node *head1, node *head2)
{
    //Write your code here
    if(head1==NULL){
        return head2 ;
    }
    
    if(head2==NULL){
        return head1 ;
    }
    node*fh =NULL ;
    node*ft=NULL;
    
    if(head1->data <head2->data){
        fh =head1 ;
        ft=head1;
     head1 =head1->next ;
        
    }else{
          fh =head2 ;  // you wrote head1 here by mistake
        ft=head2;
     head2 =head2->next ;
        
        
    }
    while(head1!=NULL &&  head2!=NULL){ // you have to write and operator not or
        if(head1->data<head2->data){
            ft->next =head1 ;
            ft=ft->next;
            head1 =head1->next ;
        }else{
              ft->next =head2 ;
            ft=ft->next;
            head2 =head2->next ;
        }
        
        
    }
    if(head1!=NULL){
        ft->next =head1 ;
    }
    if(head2!=NULL){
        ft->next =head2 ;
    }
    
    return fh ;
    
    
    
}

    node *merge_sortLL(node*head){
        int len =length(head) ;
        if(len==0||len==1){
           return head;
        }

        node*mid =midpoint(head) ;
        node*headpart2 =mid->next ;
        mid->next=NULL ;

        node*head1 =merge_sortLL(head) ;
        node*head2 = merge_sortLL(headpart2);
           node*finalhead=mergeTwoSortedLinkedLists(head1,head2);


           return finalhead ;


        

    }
    int main(){
        int t ;
        cin>>t ;
        while(t--){
            node*head =takeinput();
            head =merge_sortLL(head) ;
            print(head) ;
        }
    }

