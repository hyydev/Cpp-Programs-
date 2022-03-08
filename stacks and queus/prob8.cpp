#include<iostream>
using namespace std ;

class node {

    public :
    int data ;
    node*next ;



node(int data ){
    this->data =data ;
    next  =NULL ;

}


};

class Queue{
    node*head  ;
    int size ;
    node*temp ;
    public :
    Queue(){
        head =NULL ;
        size = 0;
        temp =NULL ;
    }

    int getsize(){
        return size ;

    }

    bool isempty(){
        return size==0 ;
    }

    void push(int element){
        node*newnode =new node(element);
       
        if(head==NULL){
            head =newnode ;
            temp = newnode ;

        }else {
            temp ->next =newnode ;
            temp = temp ->next;
            

        }
        size++ ;

        
    }

    int pop(){
        if(isempty()){
            return -1 ;
        }
        int ans =head->data ;
        return ans ;
       
       
        node*temp = head ;
         head = head->next ;
        
        delete temp ;
        size-- ;
         
    }

    int front(){
        if(isempty()){
            return -1 ;
        }
        return head->data ;


    }

};

int main(){
    int q;
    cin>>q ;
    while(q--){
        Queue q ; 
    
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.push(50);
        q.push(60);
        cout<<q.front()<<endl ;
        cout<<q.getsize()<<endl ;
         
            cout<<q.pop()<<endl ;
            cout<<q.pop()<<endl ;
            cout<<q.pop()<<endl ;
            cout<<q.pop()<<endl ;
            cout<<q.front()<<endl ;
            cout<<q.getsize()<<endl ;

    


        
    }
}

