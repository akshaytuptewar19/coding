#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   map<int ,string>m;             //frequency calculate
   m[1]="ak";
   m[5]="shiv";
   m[3]="sha";
   m.insert({9,"rut"});
   map<int ,string>::iterator it;           //both give same o/t log(n) complexicity
   for(it=m.begin();it!=m.end();it++){
    cout<<(*it).first<<it->second<<endl;

   }
   for(auto pr:m){
    cout<<pr.first<<pr.second<<endl;      //same o/t
   }
   auto it=m.find(3);                  //log n
   if(it==m.end()){                    
    cout<<"no val";
   }
   else{
    cout<<it->first<<it->second;
   }
   m.erase(3);

}
//unordered_map used for reducing time complexicity it gives unordered output
   
          for(auto it:mp1){  //compare fst elements
            if(mp2.find(it.first)==mp2.end()) return false;
        }