#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//doubly linklist
class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
    void insertatbegin(Node* &head,int d){
        Node *temp=new Node(d);
         temp->next=head;
        //temp->next=n1;
        head->prev=temp;
        head=temp;
    }
     void insertatend(Node* &tail,int d){
        Node *temp=new Node(d);
         tail->next=temp;
        //temp->next=n1;
        temp->prev=tail;
        tail=temp;
    }
 void insertatspecificpos(Node* &head,Node* &tail,int d,int pos){
        Node *temp=head;
        int c=1;
        //for start position
        if(pos==1){ 
            insertatbegin(head,d);
            return;
        }
        while(c<pos-1){
            temp=temp->next;
            c++;
        } 
        //inserting at last pos
        if(temp->next==0){
            insertatend(tail,d);
            return; 

        }
       Node *newnode=new Node(d);//creation new node
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
        newnode->prev=temp;
    }
 
    void deletenodeatbegin(Node* &head){
        head->next=0;
        head=head->next;
        head->next->prev=0;
    }
    void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;

        } 
    }




int main() {
    Node *n1=new Node(5);
    //head pointed to new node
    Node *head=n1;
    Node *tail=n1;
   
   // cout<<n1->data<<n1->next;
  //  print(head);
   insertatbegin(head,4); 
   print(head);
   //insertatend(head,6);
  // insertatspecificpos(head,tail,9,2);
  // print(head);
  

}

    