#include<iostream>
using namespace std;
int partition(int input[],int si,int ei){
   int pivot =input[si];
    int count =0 ;
    for(int i =si+1 ;i<=ei;i++){
        if(input[i]<=pivot){
            count++ ;
        }

    }
       int pivotindex= count +si ;
        input[si]=input[pivotindex];
        input[pivotindex] =pivot;
         int i=si ;
         int j =ei ;
          
         while(i<pivotindex && j>pivotindex){
         if(input[i]<=pivot){
             i++ ;
         }else if(input[j]>pivot){
                  j-- ;

         }else{
             int temp  =input[i] ;
             input[i]=input[j];
             input[j]=temp ;
             i++;
             j--;
         }
      }

         return pivotindex ;
    
}
void helper(int input[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int pos =partition(input,si,ei) ;
    helper(input,si ,pos-1) ;
    helper(input,pos+1,ei) ;
}
void quickSort(int input[],int size){
    int si =0 ;
    int ei =size-1 ;
    helper(input,0,size-1) ;
}
int main(){
    int n ;
    cin>>n ;
    int a[100] ;
    for(int i =0 ;i<n;i++){
        cin>>a[i] ;
    }
    quickSort(a,n) ;
    for(int i =0 ;i<n;i++){
        cout<<a[i]<<" " ;

    }
    cout<<endl ;

}
