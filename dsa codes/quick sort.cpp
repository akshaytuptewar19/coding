#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int partshion(int arr[],int s,int e){
    int pivot=arr[s];
   
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);
     int i=s;
    int j=e;
    while(i<pivotindex&&j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[i]>pivot){
            j++;
        }
        if(i<pivotindex&&j>pivotindex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotindex;


}
void quicksort(int arr[],int s,int e){
    if(s>=e)
    return ;
    
    int p=partshion(arr,s,e); //partishion
    quicksort(arr,s,p-1); //wright wala part sort karo
    quicksort(arr,p+1,e); //left wala part sort karo
    
}

int main() {
    int a=0,b=4;
    int arr[4]={1,2,8,9};
    quicksort(arr,a,b-1);
      for(int i=0;i<b;i++){
        cout<<arr[i];
    }
}


  