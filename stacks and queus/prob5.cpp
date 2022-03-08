#include<iostream>
using namespace std ;

template<typename T>
class queue_usingArray {
    T *data ;
    int nextindex ;
    int firstindex ;
    int size ;
    int capacity ;
    public :
    queue_usingArray(int s){
        data =new T[s] ;
        nextindex =0 ;
        firstindex =-1 ;
        capacity =s ;
        size =0 ;

    }


    int getsize() {
        return size ;
    }

    bool isempty(){
        return size ==0 ;
    }

    void enqueue(T element){
        if(size == capacity){
            cout<<"queue is full"<<endl ;
            return ;
        }
        data[nextindex] =element ;
        nextindex = (nextindex+1)%capacity ;
        if(firstindex == -1){
            firstindex =0 ;
        }
         size++ ;

    }

    T front(){
        if( isempty()){
            cout<< "queue is empty"<<endl ;
        
        return 0 ;
        }
        return data[firstindex] ;
    }

    T dequeue(){
        if(isempty()){
            cout<<"qeueue is empty"<<endl ;
            return 0 ;
        }
        T ans = data[firstindex] ;
        firstindex= (firstindex+1)%capacity ;
        size-- ;
        
        if(size==0){
            firstindex==-1 ;
            nextindex == 0 ;
        }
        return ans ;
    }
};


    int main(){
        queue_usingArray<int> q(5) ;
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);
        q.enqueue(60);
        cout<<q.front()<<endl;
        cout<<q.dequeue()<<endl ;
        cout<<q.dequeue()<<endl ;
        cout<<q.dequeue()<<endl ;
        cout<<q.getsize()<<endl ;
        cout<<q.isempty()<<endl ;



    }
    

    


