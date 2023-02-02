#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//code for printing 1 to 100 without loop and recurrision


int main() {
    int sum=0;
update:
    sum++;
    cout<<sum<<endl;
    if(sum==100){
        return 0 ;
    }
    goto update;
}

    