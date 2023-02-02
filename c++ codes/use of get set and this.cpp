#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Hero{
     int a,b;  //code for ascessing private variable by get and set
     public:
     Hero(){
        cout<<"default constructor"<<endl;
     }
     //parametrized
      Hero(int m){
         cout<<this<<endl;//this is pointer and its  address same as obj address
        this->a=m;
        cout<<a<<endl;
     }

     void print(){
        cout<<"hi"<<endl;
     }

     int get(){
        return a;
     }
    void set(int h){
         a=h;
     }

};

int main() { 
    //static call
    //Hero h1;//calls default cons
    Hero h2(60);
    cout<<&h2<<endl;  ////same address as obj address
   // Hero h1;

   //dynamic call
    Hero *h5=new Hero(55);
    h5->print();      // a calling obj dynamically


//     h1.set(5);    // each obj has different val
//     cout<<h1.get();
//      h1.get();
//     
//     h2->set(6);
//    // h2->get();
//     cout<< h2->get();
  
}

    