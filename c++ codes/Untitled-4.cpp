#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
   vector<int>v;
   cin>>a;
   v.push_back(0);
   v.push_back(1);
   int i=0;
   while(a>v[i]){
    v.push_back(v[i]+v[i+1]);
    i++;

   }
   for(int i=0;i<v.size()-1;i++){
    cout<<v[i]<<endl;
   }
}

    
