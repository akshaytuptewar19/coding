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
    // ~Node(){  //destructor is called automatically when delete keyword is used
    // int val=this->data;
    // if(this->next!=0){
    //     delete next;
    //     this->next=0;
    // }
    // cout<<"destructor is called"; 
    // }
};
    void insertatbegin(Node* &head,int d){
        Node *temp=new Node(d);    //temp node created for inserting at fst
         temp->next=head;
        //temp->next=n1;
        head=temp;
    }
    void insertattail(Node* &head,Node* &tail,int d){
        Node *temp=new Node(d);  //temp node created for inserting at last
        tail->next=temp;
         tail=temp;
    }
     void insertatanypos(Node* &tail,Node* &head,int pos,int d){ 
       Node *newnode=new Node(d);//creation new node
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
            insertattail(head,tail,d);
            return; 
        }
 
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void deleteatstart(Node* &head){
        Node* temp=head;
        temp=head->next;
        head->next=0;
        head=temp;

    }
    void deleteatend(Node* &tail,Node* &head){
        tail=head;
        while(tail->next->next!=0){
            tail=tail->next;
        }
        Node *Del1=tail->next;
        delete Del1;
        tail->next=0;

      

    }
    void deleteatspecificpos(Node* &head,int pos){
        Node* temp=head;
        if(pos==1){
           // deleteatstart(head);
           Node* del1;
              del1=head;
              head=head->next;
              del1->next=0;    //for deleting node we have to delete its all connections so we put 0 int it
              delete del1;     //after pointing it to null then delete it 
        }
        int c=1;
        while(c<pos){
            temp=temp->next;
            c++;
        }
        Node *n2=temp->next;
       temp->next=temp->next->next;
        n2->next=0;
        delete n2;
       
    }
     void deleteMiddle(Node* head) {
        Node* temp= head;
         Node* temp1;
        int count=1;
        while(temp!=NULL){
         temp=temp->next;
            count++; 
        }
        count=count-1;
        int c=0;
        temp=head;
        if(count%2==1){
        while(c<((count-1)/2)-1){
            temp=temp->next;
               c++;
         }
         //cout<<temp->data;
      }
        else{
            while(c<((count)/2)-1){
            temp=temp->next;
               c++;
          }
          //cout<<temp->data;
        }
        temp1=temp->next;
        temp->next=temp1->next;
        temp1->next=NULL;
        delete temp1;
       // return head;
        
    }
    void middleele(Node* &head){
        head=NULL;
        Node*temp;
        int le=1;
        temp=head;
        while(temp!=NULL){
            temp=temp->next;
            le++;
        }
        temp=NULL;
        int go=1;
     
        while(go!=(le/2)+1){
            temp=temp->next;
            go++;
        }
        if(le%2==1){
        cout<<temp->data;
        }
        else{
            cout<<temp->next->data;
        }
    }
Node * reversell(Node* &head){
    
    Node *curr=NULL;
    Node *prev=curr;
    Node *forward=head->next;
    head->next=NULL;
    while(forward!=NULL){
        curr=forward;
        prev->next=forward;
        forward=forward->next;
        prev=curr;
    }
   return prev;
 }

  bool iscircular(Node *head){
  
    Node *curr=head->next;
    if(head==NULL){
        return true;
    }
   
    while(head!=curr&&curr!=NULL){
        curr=curr->next;
    }
    if(head==curr){
        return true;
    }
    return false;

  }
  bool detectloop(Node*head){
    // if(head==NULL){
    //     return false;
    // }
   Node* temp=head;
    map<Node*,bool>visited;
    while(temp!=NULL){
       
        if(visited[temp]==true){
           
            return 1;
        }
        visited[temp]=1;
         temp=temp->next;

    }
     //cout<<"H";
    return false;
    
  }  

  Node* floydscycle(Node*head){
    if(head==NULL){
        return NULL ;
    }
    Node *temp=head;
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL && slow!=NULL){ 
      fast=fast->next;   
        if(fast!=NULL){
           fast=fast->next; 
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;

  }
 Node*loopstartpoint(Node*head){
    if(head==NULL){
        return NULL;
    }
    Node*intersection=floydscycle(head);
    Node* tail=head;
    while(tail!=intersection){
        tail=tail->next;
        intersection=intersection->next;
        if(tail==intersection){
            return tail;
        }
    }
    return tail;
  }
 void breakloop(Node*head){
    if(head==NULL){
        return;
    }
    Node*breakpoint=loopstartpoint(head);
    Node*temp=breakpoint->next;  
    while(temp->next!=breakpoint){
        temp=temp->next;
    }
    //cout<<temp->data;
    cout<<"loop is removed now ";
    temp->next=NULL;
    cout<<endl;
 }
 void removedupli(Node*head){
    Node*prev=head;
    Node*curr=head->next;
    while(curr!=NULL){
        if((curr->next!=NULL)&&curr->data==prev->data){
            Node*temp=prev->next;
            prev->next=curr->next;
            curr=curr->next;
            temp->next=NULL;
            delete temp;
        }
        if(curr->data==prev->data){
         Node*temp=prev->next;
            prev->next=curr->next;
            curr=curr->next;
            temp->next=NULL;
            delete temp;
        }
        else{
        prev=curr;
        curr=curr->next;
        
     }

    }
 }

   void removedupli2(Node*head){  //if linklist is sorted
    Node*curr=head;
       while(curr!=NULL){
        if((curr->next!=NULL)&&curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            
            delete temp;
        }
        else{
            curr=curr->next;
        }
     }
   }
 void removedupli3(Node*head){  //if linklist is unsorted
    Node*curr=head;
    map<int,bool>vi;
       while(curr!=NULL){
        if(vi[curr->data]==true){
            Node*temp=curr;
            curr=curr->next;
            delete temp;
            cout<<"h";
        }
        vi[curr->data]=1;
        curr=curr->next;
        
     }
   }
void removeduplicatesinsortedll(Node*head){
  Node* curr=head;
    map<Node*,bool>visited;
    while(curr!=NULL){
       
        if(visited[curr]==true){
            Node*temp=curr;
            curr=curr->next;
            delete temp;
            cout<<"h";
        }
        visited[curr]=1;
         curr=curr->next;

    }
}
void print(Node* &head){
        Node* temp=head;
        // int c1=0;
        // int c0=0;
        // int c2=0;
        while(temp!=NULL){
            cout<<temp->data;
            // if(temp->data==0){
            //     c0++;
            // }
            //  if(temp->data==0){
            //     c1++;
            // }
            //  if(temp->data==0){
            //     c2++;
            // }
            temp=temp->next;

        } 
  }
void insertintoll(Node*head){
  Node* temp=head;
        int c1=0;
        int c0=0;
        int c2=0;
        while(temp!=NULL){
            //cout<<temp->data;
            if(temp->data==0){
                c0++;
            }
             if(temp->data==1){
                c1++;
            }
             if(temp->data==2){
                c2++;
            }
            temp=temp->next;

        } 
        temp=head;
        //cout<<c0<<c1<<c2;
   while(temp!=NULL){
    //cout<<"HI";
    while(c0!=0){
        temp->data=0;
        temp=temp->next;
        c0--;
        
    }
     while(c1!=0){
        temp->data=1;
        temp=temp->next;
         c1--;
    }
     while(c2!=0){
        temp->data=2; 
        temp=temp->next;
         c2--;
    }
  }
 }


 
int main() {
    Node *n1=new Node(1);  //created fst node by constructor
    Node *head=n1; //head pointed to fst node
    Node *tail=n1; //tail pointed to fst node later on tail is updated
   // cout<<n1->data<<n1->next;
   // print(head);  //traversing linklist
//    insertatbegin(head,4);  //inserting at begining of linklist
//    insertatbegin(head,7); 
//    insertatbegin(head,7);
//      insertatbegin(head,7);
   // insertattail(head,tail,3);
      
      insertatanypos(tail,head,2,0);
      insertatanypos(tail,head,3,2);
      insertatanypos(tail,head,4,8);
      insertatanypos(tail,head,5,1);
       // insertatanypos(tail,head,6,5);
      print(head); 
      cout<<endl;
     // cout<<tail->next;
       
   //tail->next=head->next;
        
  //  cout<<head->next->data<<tail->data;
  //cout<<floydscycle(head);
  
   // cout<<detectloop(head);    //detect loop in ll
  //  insertattail(head,tail,6);
   
   // deleteatstart(head);
    //print(head);
  // deleteatspecificpos(head,1);
    
    //deleteatend(tail,head);
      // print(head);
    // reversell(head);
    //   print(prev);
     //middleele(head);

    // if(floydscycle(head)!=NULL){   //check it is circular or not
    // Node*ss=floydscycle(head);
    //     cout<<"TRUE loop in ll" <<"floydscycle joint point"<<ss->data;
    // }
    // else{
    //      cout<<"no loop in ll";
    // }
    // cout<<endl;
   
    // Node*loop=loopstartpoint(head);
    // cout<<"loopstartpoint"<<loop->data;
    //  cout<<endl;
    // breakloop(head);
    //   print(head);
   // removedupli3(head);
 //  removeduplicatesinsortedll(head);
    //  insertintoll(head);
    // cout<<endl;
    // print(head);
    deleteMiddle(head);
    cout<<endl;
        print(head); 
     
  
   


      //print(head);
   //print(head);
}

    