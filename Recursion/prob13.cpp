#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double geometricSum(int k){
    if(k==0){
        return 1 ;
    }
        return geometricSum(k-1) + (1 / pow(2,k)) ;


    
}
int main(){
    int n ;
    cin>>n ;

    cout<<geometricSum;

}