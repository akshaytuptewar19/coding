#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     int n;
     cin>>n;
    int f=0;
    int e=n;
    
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    int key;
    cin>>key;
    // while(f<=e){
    //     int mid=(f+e)/2;
    //     if(arr[mid]==key){
    //         cout<<mid<<endl;
    //     }
    //     else if(key<arr[mid]){
    //         e=mid-1;
    //     }
    //     else if(key>arr[mid]){
    //         f=mid+1;
    //     }
    //     return -1;
    // }
    if (binary_search(v.begin(), v.end(), 15)) //to check ele present or not
		cout << "15 exists in vector";
	else
		cout << "15 does not exist";
    auto itv =lower_bound(v.begin(),v.end(),key);
    auto it=lower_bound(arr,arr+n,key);  //give exact key value or if key is not present give more than key
    auto it1=upper_bound(arr,arr+n,key);  //give more than key value
    cout<<*itv<<endl;
    // cout<<*it<<endl;
    int index=itv-v.begin();
    cout<<index;

    


   
    
}

    