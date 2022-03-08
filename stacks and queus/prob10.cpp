// reverse the queue : 
// 1st approch :
#include<iostream>
using namespace std ;
#include<stack>
#include<queue>

void reverseQueue(queue<int> &q){
    stack<int> stk ;
    while(! q.empty()){
        int ans=q.front() ;
        stk.push(ans) ;
        q.pop() ;

           }

           while(! stk.empty()){
               int ans = stk.top() ;
               q.push(ans) ;
               stk.pop() ;
           }

}

int main(){
    int size ;
    cin>>size ;
    queue<int> q ;
    for(int i = 0 ,val ;i<size ;i++){
        cin>>val ;
        q.push(val);
    }

    reverseQueue(q) ;
    while(!q.empty()){
        cout<<q.front()<<" " ;
        q.pop() ;
    }

    
}

