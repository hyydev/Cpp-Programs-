#include<iostream>
using namespace std;
void printpermutation(string input,string output){
    if(input.length()==0){
        cout<<output<<endl ;
        return  ;

    }
    for(int i =0 ;i<=input.length();i++){
        printpermutation(input.substr(1),output.substr(0,i)+input[0]+output.substr(i));
    }
}
int main(){
  string input ;
  cin>>input ;
  string output ;
  printpermutation(input," ") ;
}