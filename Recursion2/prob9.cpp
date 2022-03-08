#include<iostream>
using namespace std;
int getcode(string input ,string output[]){
    if(input[0]=='\0') {
        output[0] == " " ;
        return 1 ;

    }
    int first =input[0] -48 ;
    char firstchar =first +'a'-1 ;
    char secondchar = '\0' ;
      string smalloutput1[500] ;
      string  smalloutput2[500] ;
      int size1 =getcode(input.substr(1),smalloutput1);
      int size2 =0 ;
      if(input[1]!='\0'){
          int second = first*10 +input[2]-48 ;
          if(second>=10 && second<=26){
          secondchar =second +'a'-1 ;
          int size2 =getcode(input.substr(2),smalloutput2);
          }
      }
      int k =0 ;
      for(int i =0 ;i<size1;i++){
          output[k]=firstchar +smalloutput1[i] ;
          k++ ;
      }
      for(int i =0 ;i<size2;i++) {
          output[k]=secondchar +smalloutput2[i] ;
          k++;
      }
      return k ;
}
int main(){
    
    string input ;
    cin>>input ;
    string output[1000] ;
    int count = getcode(input ,output) ;
    for(int i =0 ;i<count && i<1000 ;i++) {
    cout<<output[i]<<endl ;
    }
}
    