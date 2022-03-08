#include<iostream>
using namespace std;
int sum(int a[],int n){
    if(n==0){
        return 0 ;
    }
    
    int Small_sum =sum(a+1,n-1) ;
    return  a[0]+Small_sum  ;
}
int main(){
    int n ;
    int a[100] ;
    cin>>n ;
    for(int i =0 ;i<n ;i++){
        cin>>a[i] ;
    }
    cout<<sum(a,n) ;
    

}