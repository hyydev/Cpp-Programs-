#include<iostream>
using namespace std;
void removeConsecutiveDuplicate(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]!=input[1]){
        removeConsecutiveDuplicate(input+1) ;

    }else{
        int i =1 ;
        for(;input[i]!='\0' ;i++){
            input[i-1]=input[i] ;
        }
        input[i-1]=input[i] ;
        removeConsecutiveDuplicate(input) ;

    }
}
int main(){
  char a[100] ;
  cin>>a ;
  removeConsecutiveDuplicate(a) ;
  cout<<a ;

}