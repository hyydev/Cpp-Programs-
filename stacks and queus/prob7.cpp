#include<iostream>
using namespace std ;
#include<queue> ;



int main(){
    queue<int> s ;
    s.push(30) ;
    s.push(40) ;
    s.push(50) ;
    s.push(60) ;
    s.push(70) ;
    s.push(80) ;
    s.push(90) ;
    s.push(100) ;
    cout<<s.front()<<endl ;
    s.pop();
    cout<<s.front()<<endl ;
  cout<<s.size()<<endl ;
  cout<<s.empty()<<endl ;
    


}
