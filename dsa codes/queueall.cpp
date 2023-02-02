#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int size;
    int qfront;
    int rear;
   
public:
    Queue() {
       size=100001;
       qfront=0;
       rear=0;
       arr=new int[size];
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(rear==qfront){
            return true;
        }
        else{
            return 0;
        }
  }

void enqueue(int data) {
        if(rear==size){
            cout<<"queue is full";
        }
        else
        {
        arr[rear]=data;
        rear++;
        }
        // Implement the enqueue() function
  }

    int dequeue() {
        if(isEmpty()){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
           qfront++;
            if(qfront==rear){
               qfront=0;
                rear=0;  
            }
            return ans;
        }
        
        // Implement the dequeue() function
    }

    int front() {
        if(isEmpty()){
            return -1;
        }
         return arr[qfront];
        // Implement the front() function
    }
};