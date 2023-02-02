 #include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
 
    }
};  //seaching data and putting new data at next pos
void insertatthatdat(Node* head,int d,int putnew){
    Node* temp=head;

    while(temp->data!=d)
    {
        temp=temp->next;

    }
    Node* newnode=new Node(putnew);
    newnode->next=temp->next;
    temp->next=newnode;

}
   void insertattail(Node* &head,Node* &tail,int d){
        Node *temp=new Node(d);  //temp node created for inserting at last
        tail->next=temp;
         tail=temp;
    }
void print(Node* head){
    Node*temp=head;
    while(temp!=0){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *n1=new Node(5);
    Node *head=n1;
    Node *tail=n1;
    insertattail(head,tail,4);
     insertattail(head,tail,7);
     insertattail(head,tail,3);
      print(head);
    insertatthatdat(head,7,11);
    print(head);

}