#include<iostream>
using namespace std;
bool checkNumber(int input[],int size ,int x){
    if(size==0){
        return false ;
    }
     if(input[0]==x){
        return true ;
     }
    return checkNumber(input+1,size-1,x) ;
   


}
int main(){
    int n ;
    int a[100] ;
    int x ;
    cin>>n ;
    for(int i =0 ;i<n ;i++){
        cin>>a[i] ;
    }
    cin>>x ;
   if(checkNumber(a,n,x) ){
       cout<<" true" ;
   }else{
       cout<<"false" ;
   }
    
}