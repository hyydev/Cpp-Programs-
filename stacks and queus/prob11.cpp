#include<iostream>
#include<stack>
using namespace std; 




int main(){
    int n ;
    cin>> n ;



    int * input =new int[n] ;
    for(int i =0 ;i<n ;i++){
        cin >> input[i] ;


        int *output = stokespan(input,n);
        for(int i =0 ;i<n ;i++){
            cout<<output[i]<<" " ;
        }


    }

}