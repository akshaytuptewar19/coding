#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class pro{
 int a;
    static int b;  //declaration of static variable
    public:        //we always declare function in public beacuse we have to access it by class object
    pro(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<b<<endl;
    }
    void static dip(){
       // cout<<a<<b;  // give error static function can ascess only static variable a is not static 
       cout<<b<<endl;        //here b is static so it will run properly

    }
};
    int pro::b=0;  //initilazation outside of class so use scope resoulation operator
    int main() {   //we cant create two object with same name
    pro obj(10,20);//we can pass value to function by obj also;
    obj.display();//10 20
     pro::dip();  //20
    pro obj1(100,25);
    obj1.display();   //100 25
    pro::dip();      //20->25 value overide only single copy 
    obj.display();  //1025

   
}

    