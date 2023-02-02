#include <iostream>

using namespace std;
int sum(int arr[],int size){
    //base
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remain=sum(arr+1,size-1);
   //int ans1=sum(arr)+sum(arr+1);
   //int ans1=sum(arr,size-1);
   int ans1=arr[0]+remain;

   return ans1;
}

int main() {
    int a,b;

    int arr[5]={4,4,4,4,4};
    int size1=5;
    int ans=sum(arr,size1);
    cout<<ans<<endl;


 
}

    