#include <bits/stdc++.h>
using namespace std;
 void printbin(int n){
        int c=0;
      
    for(int i=10;i>=0;i--){
        if(((n>>i)&1)){
          c++;
        }
       cout<<((n>>i)&1);
       
    }
    cout<<endl;
   // cout<<c;
 }

int main()
{
     printbin(6); //print binary
     printbin(6|(1<<0));  //set specific bit
     printbin(6&(~(1<<1))); //unset specific bit
     printbin(6^(1<<0));  //toggle 1=>0,0=>1
    cout<<__builtin_popcount(6); //count total set bits inbuilt funct
    if(__builtin_popcount(8)==1){
        cout<<"Power of 2"<<endl;
    }
    else{
        cout<<"not pow of 2"<<endl;
    }
    if(7&1==1){
     cout<<"odd no";
    }
    else{
      cout<<"EVEN no";
    }
    char u='b'&'_'; //upper case conversion
    cout<<u;
    char l='B'|' '; //lower case
    cout<<l;
}
    