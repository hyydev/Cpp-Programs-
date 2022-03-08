#include<iostream>
using namespace std;
void removeX(char input[]){
    if(input[0]=='\0'){
      return ;
    }
    if(input[0]!='x'){
        removeX(input+1) ;
    }else{
        int i =1 ;
        for(;input[i]='\0';i++){
            input[i-1]=input[i] ;
        }
        input[i-1]=input[i] ;
        removeX(input) ;
    }
}
int main(){
     char a[100]; 
     cin.getline(a,100) ;
     removeX(a) ;
     cout<<a ;
}