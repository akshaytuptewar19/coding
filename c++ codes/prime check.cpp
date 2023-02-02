#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a; 
    int flag=0;
  
    if(a==0 || a==1){
        flag=1;
    }
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            flag=1;
            break;
        }
    }
    cout<<flag;
    if(flag==0){
        cout<<" PRIME"<<endl;
    }
    else{
          cout<<" NOT PRIME"<<endl;

    }

}

    