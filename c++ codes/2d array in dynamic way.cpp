#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int row;
    int col;
    cin>>row;
    cin>>col;
    //2D array creation dynamically
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
         arr[i]=new int[col];

    }

      for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cin>>arr[i][j];
      }
        
    }
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
      }
        
    }
    cout<<endl;
    //in heap we have to relase memory each time 
    //but in stack we dont have to relase memory
    for(int i=0;i<row;i++){
      delete []arr[i];
    }
    delete []arr;


}

    