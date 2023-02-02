#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    //base cond
    if(n==0){
        return 1;
    }
   return n*fact(n-1);
}

int main() {
    int a,b,n;
    cin>>n;
    cout<<fact(n)<<endl;

   
}

    