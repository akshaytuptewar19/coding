#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//map used for storing frequency of elements;
int main() {
    //Akshay Tuptewar
    //32475
    int a,b;
    map<int,string>mp; // do all operation in log(n)
    // unorderd_map<int,int>m;//do operation in o(n)
    // multimap<int,int>m1; //not used more
    //insted of multimap use map and vector
    //map<int,vector<int>>m1;
    // mp.insert({1,"AK"});//one way of inserting
    // mp[2]="jk"; //take o(log n) for inserting next way of inserting
    // mp[2]="jk";
    // mp[2]="jk";
   // map<int,string> ::iterator it;
    //  for(it=mp.begin();it!=mp.end();it++){ //use iterator for it
    //     cout<<it->first<<it->second;
    //     cout<<(*it).first<<(*it).second;//next way of printing
    // }
    // for(auto i=mp.begin();i!=mp.end();i++){
    //     cout<<i->first<<i->second;
    //     cout<<(*i).first<<(*i).second;//next way of printing
    // }
    // for(auto val:mp){  //easy way of printing numbers
    //     cout<<val.first<<val.second;
    // }
    //  mp.erase(2);
   // auto it=mp.find(2);
     //mp.clear();  //clear all elements of map
    // if(it==mp.end()){
    //     cout<<"NO val";
    // }
    // else{
    //     cout<<(*it).first<<(*it).second;
    // }
   // map<char,int>m;
   
    //if(m.find(s[i])!=m.end()){  //finding ele in map
        string s;
        map<char,int>m;
        for(auto it:s){
            m[it]++;   //store frequency of ele
            
        }
     for(int i=0;i<s.size();i++){ 
             if(m[s[i]]==1){  //check freq of elements
                return i;
             }
        
         }
        return -1;
    }
    if (m1 == m2) //compare two maps are equal
      cout << "Both maps are equal." << endl;

}
fori(a){
        if(mp.find(v[i])!=mp.end()){
           // cout<<"cd";
            if(mp[v[i]]!=s[i]){
                count++;
                //cout<<"cd";
                break; 
            }
        }
        else{
             //cout<<i; 
            mp[v[i]]=s[i];
        }
    }
    