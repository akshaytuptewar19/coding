#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int mid,int e){
    int i=s;
    int j=mid+1;
    int k=s;
    int arr1[e];
    while(i<=mid&&j<=e){
    if(arr[i]>arr[j]){
        arr1[k]=arr[j];
        j++;
    }
    else{
          arr1[k]=arr[i];
          i++;
    }
    k++;
    }
    if(i>mid){
        while(j<=e){

        arr1[k]=arr[j];
        k++;
        j++;
        }
    }
    else {
        while(i<=mid){

        arr1[k]=arr[i];
        k++;
        i++;
        }
    }
    for(int i=0;i<=e;i++){
        arr[i]=arr1[i];
    }
}
void mergesort(int arr[],int s,int e){
    if(s<e){
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
    }
}

int main() {
    int a=0,b=4;
    int arr[4]={1,6,4,3};
    mergesort(arr,a,b);
      for(int i=0;i<b;i++){
        cout<<arr[i];
    }


    
}

    