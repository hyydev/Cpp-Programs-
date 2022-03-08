#include<iostream>
using namespace std;
void replaceCharacter(char input[],char c1 ,char c2){
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]!=c1){
        replaceCharacter(input+1,c1,c2) ;
    }else{
        input[0]=c2 ;
        replaceCharacter(input +1,c1 ,c2) ;
    }
}
int main(){
    char a[100] ;
    cin>>a ;
    char c1 ;
    char c2 ;
    cin>>c1>>c2 ;
    replaceCharacter(a,c1,c2) ;
    cout<<a ;

}