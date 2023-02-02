#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class complex{
    int a,b;
  public:
    
  void read(){
  
    cin>>a>>b;

  }
  complex operator +(complex c){
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
   
  }
   
  void display (){
    cout<<a<<b;

  }

};
int main(){

    complex c1,c2,c3;
    c1.read();
    c2.read();
    c3=c1+c2;
    c3.display();
}