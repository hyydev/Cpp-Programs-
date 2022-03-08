//Dyanamic stacks 
#include<iostream>
#include<climits>
using namespace std ;
template<typename T> 
 class stack_usingarray{
   T*data ;
   int nextindex ;
   int capacity ; 
   
public :

stack_usingarray() {
    data=new T[5];
    nextindex =0 ;
    capacity =5;

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
        T * newdata =new T[2*capacity] ;
        for(int i =0 ;i<capacity;i++){
            newdata[i]=data[i] ;

        }
        capacity =2*capacity ;
        delete [] data ;
        data =newdata ;
    }else {
        data[nextindex] =element ;
        nextindex ++ ;
    }
}

T pop(){
    if(isempty()){
        cout<<" stack is empty"<<endl ;
        return 0 ;
    }else{
        nextindex -- ;
        return data[nextindex];

    }

}

    T top(){

        if(isempty()){
            cout<<" stack is full"<<endl ;
            return 0 ;

        }else{
            return data[nextindex-1] ;
        }
    }

   


 };


 int main(){
     stack_usingarray<char> s;
     s.push(101);
     s.push(102);
     s.push(103);
     s.push(104);
     s.push(105);
     cout<<s.top()<<endl ;
      cout<<s.pop()<<endl ;
       cout<<s.pop()<<endl ;
        cout<<s.pop()<<endl ;
         cout<<s.size()<<endl ;
          cout<<s.isempty()<<endl ;

 }