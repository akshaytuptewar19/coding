#include <iostream> 
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){  //we calling constructor for inserting fst node data
        this->data=data;
        this->next=NULL;
    }
    
};

//searching element in circular link list and inserting
 void insertnode(Node* &tail,int ele,int d){
    //empty list  
    if(tail==NULL){ 
     Node* newnode =new Node(d);
     tail=newnode;
     newnode->next=newnode; 
    }
    else{
        //non empty list
        //assuming that the ele is present 
        Node *curr=tail ;
        while(curr->data!=ele){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
 }  
  void print(Node *tail){
    Node*temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
        cout<<endl;

    
  }  
  int main(){
    Node*tail=NULL;
    insertNode(tail,5,3);
    print(tail);
  }