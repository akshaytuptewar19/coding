// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
class test{
  int *q;
  public:
  int f=-1;
  int r=-1;
   test(int &a){
    int n=a;

    q = new int[n];
   }
   test(){
    q=new int[10];
   }




void enqueue(int x){

  if(r==10-1){
    cout<<" lin queue full";
  }
  else if(f==-1 &&r==-1){
    f=0;
    r=0;
    q[r]=x;
  }
  else{
    r++;
     q[r]=x;
   
  }
}
void dequeue(){
   if(r==-1 &&f==-1){
    cout<<"empty queue";
   }
  else if(r==f){
    r=-1;
    f=-1;
    
  }
  else{
    f++;
    
  }

 
}
void display(){
  int i=f;

  while(i!=r+1){

    cout<<q[i];
    i++;
  }
}
};
int main(){
  test q;
  int m;
  cin>>m;
  test(m);
  q.enqueue(6);
  q.enqueue(8);
 q.display();
  
  
  return 0;
}
