#include<iostream>
using namespace std;
 class ComplexNumbers {
     private: 
     int real ;
     int imaginary ;
     public:
     ComplexNumbers(int real ,int imaginary) {
         this->real =real ;
         this->imaginary =imaginary ;

     }
     void plus(ComplexNumbers const &c2) {
         int x =this->real +c2.real ;
         int y =this->imaginary +c2.imaginary ;
         this->real =x ;
         this->imaginary =y ;

     }

     void multiply(ComplexNumbers const &c2) {
         int x1 =this->real *(c2.real );
         int x2 =this->real*(c2.imaginary) ;
         int y1 =this->imaginary*(c2.real) ;
         int y2 =this->imaginary*(c2.imaginary) ;
         this->real =x1 -y2 ;
         this->imaginary=x2+y1 ;
     }

     
     
     void print() {
         cout<<this->real<<" "<< "+" << " "<< this->imaginary<<"i" <<endl ;
     }


 };


int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}