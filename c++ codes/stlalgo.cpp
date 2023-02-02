#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int array[]= {2,3, 5, 8 , 9 , 9, 9};
   s = "Akshay";
   cout<<s.find('a');
   auto it = find(array, array+7, 8);
   int index = it-array;
   cout<<index;
   //auto to find iterator
   vector<int> v(5,3);  //{3,3,3,3,3}
   cout<<count(v.begin(),v.end(), 3); //1 ,
   cout<<count(array, array+7, 9);   //[)
   reverse(array, array+n);

}

    