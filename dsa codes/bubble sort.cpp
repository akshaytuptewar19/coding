#include<bits/stdc++.h>
using namespace std;

int main() {         //bubble sort=>swapping fst ele wit its adj ele
    int a,b,n;       // max element placed at its right position
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
        {
            cin>>arr[i];  //53962
        }
    for(int i = 1; i < n; i++) //passes (n-1)
    {
     for(int j =0 ; j < n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
     }

      for(int i = 0; i < 5; i++)
        {
            cout<<arr[i];
        }

}