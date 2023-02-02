#include<bits/stdc++.h>
using namespace std;

struct node 
{ 
	int data; 
	struct node* left; 
	struct node* right; 
}; 
 
void inorder(node*root,vector<int>&v){
  if(root==0){
    return;
  }
    
  inorder(root->left,v);
  v.push_back(root->data);
  
  inorder(root->right,v);
}
 
  
  

int isBST(struct node* node) 
{ 
      vector<int>v;
     inorder(node,v);
     for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            return 0;

        }
     }
     return 1;

  //write your code here
} 

struct node* newNode(int data) 
{ 
  struct node* node = (struct node*) malloc(sizeof(struct node));        
  node->data = data; 
  node->left = NULL; 
  node->right = NULL; 
  return(node); 
} 

int main() 
{ 
  struct node *root1 = newNode(4); 
  root1->left	 = newNode(2); 
  root1->right	 = newNode(5); 
  root1->left->left = newNode(1); 
  root1->left->right = newNode(3); 

  if(isBST(root1)) 
      printf("Given tree is a BST\n"); 
  else
      printf("Given tree is not a BST\n");

  struct node *root2 = newNode(3); 
  root2->left	 = newNode(2); 
  root2->right	 = newNode(5); 
  root2->left->left = newNode(1); 
  root2->left->right = newNode(4); 

  if(isBST(root2)) 
      printf("Given tree is a BST\n"); 
  else
      printf("Given tree is not a BST\n"); 

  getchar(); 
  return 0; 
} 