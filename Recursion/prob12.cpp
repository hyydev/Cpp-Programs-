#include<iostream>
using namespace std;
int sumOfDigits(int n){
    if(n<10){
        return n ;
    }
    int ans =sumOfDigits(n/10) ;
    
    return    n%10 +ans  ;
}
int main(){
    int n ;
    cin>>n ;
    cout<<sumOfDigits(n);
}