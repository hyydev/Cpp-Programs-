#include<iostream>
using namespace std;
int permutation(string input,string output[]){
    if(input.length()==0){
        output[0]==" ";
        return 1;
            }

string smalloutput[1000] ;
int smallsize =permutation(input.substr(1),smalloutput);
int k =0 ;
 for(int i =0 ;i<smallsize;i++) {
     for(int j =0 ;j<=smalloutput[i].length();j++) {
        output[k] =smalloutput[i].substr(0,j) + input[0] + smalloutput[i].substr(j) ;
        k++ ;
     }
 }
 return k ;

}
int main(){
    string input ;
    cin>>input ;
    string output[1000] ;
    int count = permutation(input,output) ;
    for(int i =0 ;i<count ;i++){
        cout<<output[i]<<endl ;
    }
}