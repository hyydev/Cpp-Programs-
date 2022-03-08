#include<iostream>
using namespace std;
#include<cstring> 
void starPair(char input[]){
    int size =0 ;
    for(int i =0 ;input[i]!='\0';i++){
        size++ ;
    }
   
    if(input[0]=='\0'){
        return ;
    }

    if(input[0]==input[1]){
        
        
        for(int i =size ; i>=1;i--){
            input[i+1]==input[i] ;
        }
        
    
        input[1] = '*' ;
    }

    starPair(input+1) ;
}
int main(){
    char input[100] ;
    cin>>input ;
    
    starPair(input) ;
      cout<<input ;

}