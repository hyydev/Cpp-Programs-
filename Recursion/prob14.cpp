#include<iostream>
#include<cstring>
using namespace std;
bool helper(char a[],int si ,int ei){
   if(si>=ei){
       return true ;
   }
   if(a[si]!=a[ei]){
       return false ;
   }else{
       return helper(a,si+1,ei-1) ;
   }
}
bool checkPalindrome(char a[] ){
    int len =0 ;
    for(int i =0 ; a[i]!='\0';i++){
        len++ ;
    }
    helper( a,0,len-1) ;
    
    

}
int main(){
    char chr[100] ;
    cin>>chr;
    int l = strlen(chr) ;
   /* int si =0 ;
    int ei =l-1 ;*/
    if (checkPalindrome(chr)){
        cout<<" true" <<endl;
    }else{
        cout<<"false"<<endl ;
    }
    
}