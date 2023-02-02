#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int>&v){  //use always & for reference 
   
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    //v.push_back(7);  //if we insert here next vec get updated bec we have given reference
}

int main() {
//    // vector<pair<int,int>>v={{3,2},{4,9}}; //one type of input
//    vector<pair<int,int>>v;  //vector of pair
//    int m,n;
//     for(int i=0;i<2;i++){
//         cin>>m>>n;
//         v.push_back({m,n});  //take input like this in pair
//     }
//     printvec(v);
   
//    vector<int>v[3]; //vector of array
//      //vector<
   
//    for(int i=0;i<2;i++){
//     int n2;
//     cin>>n2;
//        for(int j=0;j<n2;j++){  //second array size
//        int x;
//        cin>>x;
//        v[i].push_back(x);
//        }
//    }
//     for(int i=0;i<3;i++){
//       printvec(v[i]);
//      }
  // vector<vector<int>>v; //vector of vector
  //    //vector<
  //  for(int i=0;i<2;i++){
  //   int n2;
  //   cin>>n2;
  //   vector<int>temp;
  //      for(int j=0;j<n2;j++){  //second array size
  //      int x;
  //      cin>>x;
  //      temp.push_back(x);
  //      }
  //      v.push_back(temp);
  //  }
  //   for(int i=0;i<2;i++){
  //     printvec(v[i]);
  //    }
  vector<int>v;
  //v[0]=5;
  v.push_back(5);
  v.push_back(9);
  v.push_back(3);
   vector<int>v1;
   for(auto j:v){
    v1.push_back(j);
   }
   cout<<v1[0];



}