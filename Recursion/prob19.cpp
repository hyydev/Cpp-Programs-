#include<iostream>
using namespace std;
#include<cstring>
#include<iomanip>
#include<math.h>

int stringToNumber(char input[]){

    int size =0 ;
    for(int i =0 ;input[i]!='\0';i++ ){
        size++ ;
    }

if(input[0]=='\0'){
    return 0;
}
 
 int b=input[0] - 48;
 

int ans =stringToNumber(input+1) ;
   return  (b * pow(1,size-1) )+ ans ;
  
}

int main(){
    char a[50] ;
    cin>>a;
    stringToNumber(a);
    cout<<a ;
}
