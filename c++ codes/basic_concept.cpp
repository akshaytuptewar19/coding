#include <iostream>
using namespace std;
class rect {

int x, y;
 public: 
 rect(int a, int b) {

x = a;

y = b;

}

int area() {

return (x*y);

}
};

int main() {

rect rect(3, 4);//obj name is same as class name

cout << "rect area: " << rect.area();

return 0;
}