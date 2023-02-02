#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;


int main() {
  ofstream out;
  out.open("kat.txt");
  out<<"this id";
  out.close();

    ifstream co ;
    string sa;
    co.open("kat.txt");
    co>>sa;
    cout<<sa;
    while(co.eof()==0){
      getline(co,sa);
        cout<<sa;

    }
    
   co.close();
}



    