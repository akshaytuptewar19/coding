#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class stu{
    static int  a;
    public:

    stu(){
       cout<< a++<<endl;
    }
    void print(){
        cout<< a<<endl;
    }

};
int stu::a =1;


int main() {
     
    stu obj[100]; //calling for constructor
    for(int i = 0;i<100;i++){  //one after one upto 100 objects calling print function
        obj[i].print();
    }
}

    