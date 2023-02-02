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
    void insertatbegin(Node* &head,Node* &tail,int d){
        Node *temp=new Node(d);
         temp->next=head;
        // tail=head;
        //temp->next=n1;
        head->prev=temp;
        head=temp;
    }
     void insertatend(Node* &tail,int d){
        Node *temp=new Node(d);
         tail->next=temp;
        //temp->next=n1;
        
        tail=tail->next;
    }
 void insertatspecificpos(Node* &head,Node* &tail,int d,int pos){
        Node *temp=head;
        int c=1;
        //for start position
        if(pos==1){ 
            insertatbegin(head,tail,d);
            return;
        }
       if(pos==2){ 
        Node *newnode=new Node(d);//creation new node
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
        newnode->prev=temp;
        
        return ;
        }
        while(c<pos-1){
            temp=temp->next;
            c++;
        } 
       // cout<<temp->data<<endl;
        //inserting at last pos
        if(tail==temp->next){
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
        Node *del2=head; //del2 poniting to fst node
        head=head->next;
        head->prev=0;
         delete del2;
    }
    void deletenodeatend(Node* &head,Node* &tail){
         tail=head;
        while(tail->next->next!=0){
            tail=tail->next;
        }
        Node *Del1=tail->next;
        tail->next->prev=0;
        delete Del1;
        tail->next=0;
    }

    void print(Node* &head){

        Node* temp=head;
       
        while(temp!=NULL){
           
            cout<<temp->data;
            temp=temp->next;

        } 
        cout<<endl;
    }
    void deletenodeatspecific(Node* &head,Node* &tail,int pos){
           Node* curr=head;
           Node* prev=0;
        if(pos==1){
          deletenodeatbegin(head);
        }
        // if(pos==leng){
        //   deletenodeatbegin(head);
        // }
        int c=1;
        while(c<pos){
            prev=curr;
            curr=curr->next;
            c++;
        }
        // cout<<prevnode->data;
        // cout<<temp->data;
        curr->prev=0;
        prev->next=curr->next;
        curr->next=0;
        delete curr;
       
    }
  
int main() {
    Node *n1=new Node(5);
    //head pointed to new node
    Node *head=n1;
    Node *tail=n1;
   
   // cout<<n1->data<<n1->next;
  //  print(head);
   //insertatbegin(head,tail,4); 
 
   insertatend(tail,6);
   insertatspecificpos(head,tail,1,2);
   insertatspecificpos(head,tail,7,3);
   print(head);
   //insertatspecificpos(head,tail,6,2);
   //deletenodeatbegin(head);
   //deletenodeatspecific(head,tail,4);
   deletenodeatend(head, tail);
   print(head);
  

}

    