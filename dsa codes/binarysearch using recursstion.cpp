#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        bool left= binarysearch(arr,mid+1,e,key);
        return left;

    }
    else{
       bool right= binarysearch(arr,s,mid-1,key);
       return right;
    }
}
int main() {
    int a,b;
    int arr[5]={4,4,4,4,4};
    int size1=5;
    int key;
    cin>>key;
    int s=0;
    int e=size1-1;
    
    bool ans=binarysearch(arr,s,e,key);
    cout<<ans;
   
}

    