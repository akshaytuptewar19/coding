#include <bits/stdc++.h>
using namespace std;
void processArray(int &m){
    int final=m;
    cout<<final;
}

int main()
{
    //std::vector<int>v ;
    int first;
    int max1=0;
    while(true){
    cin>>first;
        if(first<0){
            break;
        }
        else{
            if(first<100)
            max1=max(max1,first);

        }
    }
    //v,push_back(max);
    processArray(max1);
    return 0;
}