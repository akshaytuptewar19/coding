#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>b;
    int arr[b];
  
    for(int i=0;i<b;i++){
        cin>>arr[i];  //23158
    }
    for(int i=1;i<b;i++){
    int current=arr[i]; //3
    int j=i-1;
    while(arr[j]>current&& j>=0){  //compare current element with its all previous elements
        arr[j+1]=arr[j];           //if previous element is greater than current ele than shift it to its next position
        j--;                      
    }
    arr[i]=current;        //if previous element is not greater then put current ele at same index
    }
    for(int i=0;i<b;i++){
        cout<<arr[i];
    }
    

    
}

    