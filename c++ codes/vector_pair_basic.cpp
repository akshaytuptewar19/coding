#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int>&v){  //use always & for reference 
   
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    v.push_back(7);  //if we insert here next vec get updated bec we have given reference


}

int main() {
//   pair<int,string>p;
//   //p={3,"s"};
//   cin>>p.first>>p.second;
//   cout<<p.first<<p.second;
//   pair<int,int>p_array[3];
//   p_array[0]={3,8};
//   p_array[1]={1,8};
//   for(int i=0;i<2;i++){
//     cout<<p_array[i].first<<p_array[i].second;
//   }
//vector<int>v(3,4);//it is three size vector contain all ele are 4 i.e v={4,4,4}
// vector<int>v;
// // int m;
// // for(int i=0;i<4;i++){
// //     cin>>m;
// //     v.push_back(m);
// //   }
// //v[0]=1  //we cant assign ele to vector like this
// v.push_back(0);
// v.push_back(1);
//   //v.pop_back();  //removes last ele
 
// vector<int>v1=v;  //copying one vector to another vector
//   //printvec(v);
//   v1.push_back(6);
//     printvec(v);
//     cout<<endl;
//       printvec(v);

//   printvec(v1);

//vector<pair<int,string>>v; //make pair and insert it into vector



  

}

    