// Reverse the stack :
#include<iostream>
#include<stack>
using  namespace std ;

 void reverseStack(stack<int> &input ,stack<int> &extra){
    stack<int> temp ;
    while(! input.empty()){
         int ans =input.top();
         temp.push(ans) ;
        input.pop() ;

    }

    while(! temp.empty()){
        int ans = temp.top() ;
        extra.push(ans) ;
        temp.pop() ;
    }

    while(! extra.empty()){ 
        int ans =extra.top() ;
            input.push(ans);
            extra.pop() ;
        }
    }


int main(){
    int size ;
    cin>>size ;
    stack<int> input ,extra ;
    for(int i = 0 ,val ;i<size ;i++){
        cin>>val ;
        input.push(val);
    }

    reverseStack(input,extra) ;
    while(!input.empty()){
        cout<<input.top()<<" " ;
        input.pop() ;
    }

    
}


