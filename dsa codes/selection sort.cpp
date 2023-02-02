#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {         //selection sort=>swapping fst ele
    int a,b,n;
    cin>>n;
    int arr[n];
    int minindex=0;
    for(int i = 0; i < n; i++)
        {
            cin>>arr[i];  //53962
        }
    for(int i = 0; i < n; i++)
    {
          minindex=i;
     for(int j = i+1; j < n; j++)
        {
            if(arr[minindex]>arr[j]){//here i am checking fst element is small than other elements if it is not small 
                                     //swap with smallest elements in the array

             swap(arr[j],arr[minindex]);
            }
        }
    }
    for(int i = 0; i < 5; i++)
        {
            cout<<arr[i];
        }
    


   
}

    