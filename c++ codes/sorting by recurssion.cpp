#include <iostream>

using namespace std;
bool issorted(int arr[],int size){
    //base
    if(size==1||+size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remain=issorted(arr+1,size-1);
        return remain;
    }
}

int main() {
    int a,b;

    int arr[5]={2,4,6,8,9};
    int size1=5;
    bool ans=issorted(arr,size1);
    cout<<ans<<endl;


 
}

    