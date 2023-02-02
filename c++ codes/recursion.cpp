#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int print(int n){
    //base cond
    if(n==0){
        return 1;
    }
  
     print(n-1);
     cout<<n<<endl;
}

int main() {
    int a,b,n;
    cin>>n;
    
    print(n);

   
}

    