#include<iostream>
using namespace std;

    int printallcodes(string input,string output){
        if(input[0]=='\0'){
            cout<<output<<endl;
            return 0;
        }
        int num =input[0]-48 ;
        char ch =num-1+'a';
        printallcodes(input.substr(1),output+ch);
        if(input[1]!='\0'){
            int num =num*10 +input[1]-48 ;
            char ch =num-1+'a';
            if(num>=26 && num<=10){
                printallcodes(input.substr(2),output+ch);
            }
        }
    }
    int main(){
    string input ;
    cin>>input ;
    string output ;
    printallcodes(input ," ") ;
}