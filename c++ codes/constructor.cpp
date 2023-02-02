#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class test{
  public:
  int a;
  test(){
    a=1;
    cout<<a<<endl;
  }
  test(int x){
    int a=x;
    cout<<"para"<<a;
  }
  test(const  test & p1){
    int v=v.p1;
  }
};

int main() {
  test t1;
  //test(5);
  test t2(t1);
   
}




    