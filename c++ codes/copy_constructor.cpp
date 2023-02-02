#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Hero{
     int a,b;  
     public:
    Hero(){
        cout<<"default constructor"<<endl;
     }
     //parametrized
    Hero(int m, int n){
       //cout<<this<<endl;  //this is pointer and its  address same as obj address
        this->a=m;
        this->b=n;
       // cout<<a<<endl;
     }

     //   Hero(Hero &obj){     //it is user defined copy constructor
   //      cout<<"copy const";
   //      this->a=obj.a;
   //   }
  
 //it is user defined copy constructor if we comment this inbuilt default constructor will be called.
 //so what is need of user defined copy constructor?
 // when inbuilt default constructor is called then two objects point to same memory location
 // its called shallo copy.
 // when user defined copy constructor called then new object copies 
 //the data from fst object and store at new memory location its called deep copy.
 //if we change the data from obj 2 then obj 2 data only change obj1 data remains as it is
 //beacuse different memory location of objects .it is possible only in user defined copy
 //constructor.
 //in inbuilt copy constructor if we change the data from obj 2 then obj 2 data and obj1 data also 
 // changes beacuse same memory location of objects.
 //both objects points to the same memory location.
 //so in industry user defined copy constructor is needed.
 
   
       void print(){
     //cout<<a<<endl;
      cout<<a<<endl;
      cout<<b<<endl;
    }
};
 int main(){
    Hero obj;
    obj.print();
     //Hero obj1(obj),bj1=obj both are same thing
   //  Hero obj1=obj;//copy constructor makes new memory storage
   //  Hero obj2;
   //  obj2=obj; //assignment operator has same memory storage
   //  obj1.print();

 }
 //if unable to understand refer gfg copy constructor