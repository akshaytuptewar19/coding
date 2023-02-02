#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void reachhome(int s,int e){
    cout<<s;
    if(s==e){
        cout<<"reached at home";
        return;
    }
    
     reachhome(s+1,e);
}

int main() {
    int a,b;
    cin>>a>>b;
     reachhome(a,b);
   
    
}

    