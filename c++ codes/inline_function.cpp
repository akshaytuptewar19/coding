#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//in inline function function call is replaced with its body.
 inline int get(int &a,int&b){//use of inline readibility increases and no extra memory useases
     a=a+2;
      return (a>b)? a:b;     //it not applicable for more than 3 steps of code
    
}
int main() {
    int a,b;
    cin>>a>>b;
  //int ll=(a>b)? a:b;  //this is done by inline fun
    int ll=get(a,b);   //get(a,b) is replace with (a>b)? a:b;
    cout<<ll;

   
}

    