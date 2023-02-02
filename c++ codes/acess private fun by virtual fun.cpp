// C++ program to access private function using virtual function
//we can only access the private function of derived class by making virtual function of to base class 
//we have to make obj of derived class and store address of obj in base class pointer and access derived private function

#include <iostream>
using namespace std;
 
// Parent class having virtual
// function disp()
class Parent {
public:
    // Create virtual function
    virtual void disp()
    {
        cout << "This is the public disp"
             << " method of Parent class" << endl;
    }
};
 
// Child class inherit to parent class
class Child : public Parent {
private:
    int secret_key;
 
    // Private method which will be called
    // Override the method of parent class
    void disp()
    {
        cout << "This is the private disp "
             << "method of child class "
             << endl;
        cout << "The key is "
             << secret_key << endl;
    }
 
public:
    // Constructor of the child class
    Child(int key) { secret_key = key; }
};
 
// Driver Code
int main()
{
    // Create object of child class
    Child child(1019);
 
    // Upcasting
    Parent* obj = &child;
 
    // Function call of child class
    obj->disp();
    return 0;
}