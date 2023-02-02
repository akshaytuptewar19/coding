#include <iostream>
#include<bits/stdc++.h>
#define ln "\n"  //0 is not used insted of null
using namespace std;
 class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

 };
 node* createnode(node *root){
    cout<<"enter data :"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;   //use only null
    }
    cout<<"enter data for iserting in left"<<data<<ln;
    root->left=createnode(root->left);
    cout<<"enter data for iserting in right"<<data<<ln;
      root->right=createnode(root->right);
      return root;
 }
 void levelordertraversal(node *root){
   queue<node*>q;//doubt*node
   q.push(root);//root->data
   q.push(NULL);

 
   while(!q.empty()){
         node *temp=q.front();
        q.pop();
        
          if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
               q.push(NULL);
            }
          } 
       else{
         cout<<temp->data<<" ";
         if(temp->left){
         q.push(temp->left);
     
      }
        if(temp->right){
         q.push(temp->right);
  
      }
       }
     

   }
 }
 void inorder(node *root){ //LNR
   if(root==NULL){
      return ;
   }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);

 }
  void preorder(node *root){//NLR
   if(root==NULL){
      return ;
   }
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);

 }


int main() {
   node *root=NULL;
   //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
   root=createnode(root);
   levelordertraversal(root);
   inorder(root);
   cout<<endl;
   preorder(root);

}

    