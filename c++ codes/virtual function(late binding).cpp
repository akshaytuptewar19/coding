#include <iostream>
#include<bits/stdc++.h>                            
using namespace std;
class test{
    int a,b;
  public:
   virtual void fun1(){ //do late binding and insted of car  give sport car as output
    cout<<"car";

  }
};

class ques:public test{
public:
void fun1(){
  cout<<"sport car";
}
};
int main(){
  test obj1,*p;
  ques obj2;
  p=&obj2;
  p->fun1();  //sport car output
}
/*#include <iostream>
#include<bits/stdc++.h>                            
using namespace std;
class test{
    int a,b;
  public:
   void fun1(){
    cout<<"car";

  }
};

class ques:public test{
  public:
void fun1(){
  cout<<"sport car";
}
};
int main(){
  test obj1,*p;
  ques obj2;
  p=&obj2;
  p->fun1();  //car output
  
  

}*/

