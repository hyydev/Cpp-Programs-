#include<iostream>
using namespace std;
int helper(int input[],int si,int ei,int element){
    int mid = (si+ei)/2 ;
    if(si>ei){
        return -1 ;
    }
    if(input[mid]==element){
        return mid ;
    }else if(  input[mid]>element){
        helper(input,si,mid-1,element) ;
    }else {
        helper(input,mid+1,ei,element) ;
    }

}

    int binarySearch(int input[],int size ,int element){
        return helper(input,0,size-1,element) ;
    }


int main(){
    int n ;
    cin>>n ;
    int a[100] ;
    for(int i =0 ;i<n ;i++){
        cin>>a[i] ;
    }
    int x;
    cin>>x;
    cout<<binarySearch(a,n ,x) ;

}