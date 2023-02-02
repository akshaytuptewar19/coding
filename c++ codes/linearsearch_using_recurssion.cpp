#include <iostream>

using namespace std;
bool linearsearch(int arr[],int size,int key){
    //base
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return true;
    }
    else{
    bool remain=linearsearch(arr+1,size-1,key);
    return remain;
    }

}

int main() {
    int a,b;
    int arr[5]={4,4,4,4,4};
    int size1=5;
    int key;
    cin>>key;
    bool ans=linearsearch(arr,size1,key);
    cout<<ans<<endl;

}

    