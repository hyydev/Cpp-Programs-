#include<iostream>
using namespace std;
void replacePi(char input[]){
    int size =0 ;
    for(int i =0 ; input[i]!='\0';i++){
       size++ ;
    }
    if(input[0]=='\0'){
      return ;
    }
    
    if(input[0]=='p'&& input[1]=='i'){
        for(int i =size-1 ;i>=2;i--){
              input[i+2]=input[i] ;
        }
        input[0]='3' ;
        input[1]='.';
        input[2]='1' ;
        input[3]='4';
        
        replacePi(input+4) ;

    }else{
        replacePi(input+1) ;
    }
    

}
int main(){
    char a[100] ;
    cin.getline(a,100);
    replacePi(a) ;
    cout<<a;

}