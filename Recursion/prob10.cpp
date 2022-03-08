#include<iostream>
int multiplyNumbers(int m ,int n){
    if(n==0){
        return 0 ;
    }
    int ans =multiplyNumbers(m ,n-1);
    return m+ans ;
}
using namespace std;
int main(){
    int m ,n ;
    cin>>m >> n ;
    cout<<multiplyNumbers(m,n) ;

}