#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a=5;

    int *ptr=&a;
    cout<<a<<endl;
    cout<<*ptr<<endl;//same value *dereferencing operator
    cout<<ptr<<endl;//gives address

    int n=6;
    int *p=0;
    p=&n;      // second way of representing pointer
    cout<<*p<<endl;//value
    cout<<p<<endl;//add
    (*p)++;//val increase
    cout<<"after inc"<<n<<endl; 

    //copying pointer
    int *m=p;
    cout<<"copying pointer"<<*m<<*p<<endl;//same val
     
     // pointer in array
     int i=3;
     int arr[5]={0,4,7,8};
     cout<<*arr<<endl;//give 0
     cout<<i[arr]<<endl;//give ele at 3rd index


    
}

    