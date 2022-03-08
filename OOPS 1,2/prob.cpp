#include<iostream>
using namespace std;
class Polynomial{
    public :
    int *degcoeff  ;
    int capacity ;
    Polynomial(){
        degcoeff =new int[5];
        capacity =5 ;
        for(int i =0 ;i<capacity ;i++){
            degcoeff[i] =0 ;
        }
    }

        Polynomial(Polynomial const &p){ 
            degcoeff =new int [p.capacity] ;
            for(int i =0 ;i<p.capacity;i++){
                degcoeff[i] =0 ;
            }
            capacity =p.capacity ;
            

        }
        void operator=(Polynomial const &p){
            degcoeff =new int [p.capacity] ;
            for(int i =0 ;i<p.capacity;i++){
                degcoeff[i] =0 ;
            }
            capacity =p.capacity ;
            
        }
        void setCoefficient(int deg,int Coeff){
            if(deg>=capacity){
                int size =2*capacity ;
                while(size<=deg){
                    size *= 2 ;
                }
                int *newdegcoeff  =new int[size] ;
                for(int i =0 ;i<size;i++){
                    newdegcoeff[i] =0 ;
                }

                for(int i =0 ;i<size ;i++){
                    newdegcoeff[i] =degcoeff[i] ;

                }
                capacity =size ;
                delete  []degcoeff ;
                degcoeff =newdegcoeff ;


            }
            degcoeff[deg] =Coeff ;
        }
        void print(){
            for(int i =0 ;i<capacity;i++){
                if(degcoeff[i]!=0){
                    cout<<degcoeff[i]<< "x" <<" "<<i<<" ";
                }
            }
            cout<<endl; 
        }
        Polynomial operator+(Polynomial const &p){
            Polynomial pnew ;
            int i =0 ;int j=0 ;
            while( i<this->capacity && j<p.capacity){
                int deg = i ;
                int coeff =this->degcoeff[i] +p.degcoeff[j] ;
                pnew.setCoefficient(deg,coeff) ;
                i++ ;
                j++ ;

            }
            while(i<this->capacity){
                pnew.setCoefficient(i,degcoeff[i]) ;
                i++ ;
            }
            while(j<p.capacity){
                pnew.setCoefficient(j ,degcoeff[j]);
                j++ ;
            }
            return pnew ;
        }
         int getcoeff(int deg){
             if(deg>=capacity){
                 return 0 ;
             }
             return degcoeff[deg] ;
         }
         Polynomial operator-(Polynomial const &p){
            Polynomial pnew ;
            int i =0 ;int j=0 ;
            while( i<this->capacity && j<p.capacity){
                int deg = i ;
                int coeff =this->degcoeff[i] - p.degcoeff[j] ;
                pnew.setCoefficient(deg,coeff) ;
                i++ ;
                j++ ;

            }
            while(i<this->capacity){
                pnew.setCoefficient(i,degcoeff[i]) ;
                i++ ;
            }
            while(j<p.capacity){
                pnew.setCoefficient(j , -1*degcoeff[j] )  ;
                j++ ;
            }
            return pnew ;

        }
         int getcoeff(int deg){
             if(deg>=capacity){
                 return 0 ;
             }
             return degcoeff[deg] ;
         }

         Polynomial operator *(Polynomial p){
         Polynomial pnew ;
         for(int j=0 ;j<p.capacity;j++){
             for(int i =0 ;i<capacity;i++){
                 int deg =i+j ;
                 int coeff =pnew.getcoeff(deg)+(this->degcoeff[i]*p.degcoeff[j]) ;
                 pnew.setCoefficient(deg,coeff) ;
                }
            }
            return pnew ;

        
        }
        

   
} ;
int main(){
     int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];

    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setcoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setcoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;

}