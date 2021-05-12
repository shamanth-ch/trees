#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* right;
    node* left;
    node(int x)
    {
        data=x;
        left=right=NULL;

    }
};
void preorder(struct node* root)
{
stack<node*>status_stack;
if(root==NULL)
  return;
status_stack.push(root);
while(!status_stack.empty())
{
     struct node* node=status_stack.top();
    cout<<node->data<<" ";
    status_stack.pop();
    if(node->right)
       status_stack.push(node->right);
    if(node->left)
      status_stack.push(node->left);
        
    
  
}




}
int main()
{
    struct node* root = new node(10);
    root->left = new node (8);
    root->right = new node(2);
    root->left->left = new node(3);
    root->left->right = new node(5);
    root->right->left = new node(2);
    preorder(root);
}
