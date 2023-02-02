#include<iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
private:

public:
  int x=1;
void setX (int x)
{
	// The 'this' pointer is used to retrieve the object's x
	// hidden by the local variable 'x'
	this->x = x;   //gives 20
  cout<<x;
}
void print() { //cout << "x = " << x << endl;
}
};

int main()
{
Test obj;
int x = 20;
obj.setX(x);
obj.print();
return 0;
}
