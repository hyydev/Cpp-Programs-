#include<iostream>
using namespace std;
int Sub(string input ,string output[]){
    if(input.empty()){
        output[0] =" " ;
        return 1 ;
    }
    string smallstring =input.substr(1) ;
    int smalloutputsize =Sub(smallstring ,output) ;
    for(int i =0 ;i<smalloutputsize;i++){
        output[i +smalloutputsize ] =input[0] +output[i] ;
    }
    return 2*smalloutputsize ;
}
int main(){
    string input ;
    cin>>input ;
    string *output =new string[1000] ;
    int count =Sub(input,output) ;
    for(int i =0 ;i<count;i++){
        cout<<output[i]<<endl;
    }
}