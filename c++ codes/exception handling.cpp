#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int a){
    int g=5;
    if(a==0){
        throw exception("exception here");
    }
    if(a>1){
        cout<<g/a;
    }

}
int check(int a){
    try{
        int x=fun(a);
        cout<<x<<endl;

    }
    
      catch(exception e){

        cout<<e.what()<<endl;

    }

}
int main(){
    int n;
    cin>>n;
    check(n);
}