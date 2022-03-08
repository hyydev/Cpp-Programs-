#include<iostream>
using namespace std;
int Firstindex(int input[],int size ,int x){
    if(size==0){
      return -1 ;
    }
    if(input[0]==x){
        return 0 ;
    }
   
        
    
    int ans = Firstindex(input+1,size-1,x);

    if(ans!=-1){
        return ans +1;
    }else{
        return ans ;
    }
    
        
    
   
}
int main(){
    int n ;
    cin>>n ;
    int a[100] ;
    for(int i =0 ;i<n ;i++){
    cin>>a[i] ;
    }
     int x ;
    cin>>x ;
    cout<<Firstindex(a,n,x) ;
}