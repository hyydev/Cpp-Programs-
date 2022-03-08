#include<iostream>
#include<climits>
using namespace std ;
 class stack_usingarray{
   int*data ;
   int nextindex ;
   int capacity ; 
   
public :

stack_usingarray(int totalsize) {
    data=new int[totalsize];
    nextindex =0 ;
    capacity =totalsize ;

}

int size(){
    return nextindex ;
}

bool isempty(){
    if(nextindex==0){
        return true ;
    }else{
         return false ;
    }
}

void push(int element){
    if(nextindex==capacity){
        cout<<" stack is full " ;
    }else {
        data[nextindex] =element ;
        nextindex ++ ;
    }
}

int pop(){
    if(isempty()){
        cout<<" stack is empty"<<endl ;
        return INT_MIN ;
    }else{
        nextindex -- ;
        return data[nextindex];

    }

}

    int top(){

        if(isempty()){
            cout<<" stack is full"<<endl ;

        }else{
            return data[nextindex-1] ;
        }
    }

   


 };


 int main(){
     stack_usingarray s(5) ;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);
     cout<<s.top()<<endl ;
      cout<<s.pop()<<endl ;
       cout<<s.pop()<<endl ;
        cout<<s.pop()<<endl ;
         cout<<s.size()<<endl ;
          cout<<s.isempty()<<endl ;

 }