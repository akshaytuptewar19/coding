#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Base   //cant create obj of pure virtual fun class
{ public:
virtual void show() = 0; //Pure Virtual Function
void fun2(){              //we cannot create obj of base class and we want to run fun2 function so create obj of derived class and access
    cout<<"in pure";
}

};


class Derived:public Base
{ public:
void show()
{ cout << "Implementation of Virtual Function in Derived class\n";
} };

int main()
{ Base *b;
Derived obj;
Derived d;
b = &d;
b->show();//Implementation of Virtual Function in Derived class
obj.show();//Implementation of Virtual Function in Derived class
obj.fun2(); //in pure
}
