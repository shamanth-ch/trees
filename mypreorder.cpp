#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
void preorder(node* root)
{
    if(root==NULL)
       return;
  stack<node*>check_stack;
  check_stack.push(root);



  while(!check_stack.empty())
  {
   struct node* node = check_stack.top();
		printf("%d ", node->data);
		check_stack.pop();  

        if(node->right)
             check_stack.push(node->right);
        if(node->left)
             check_stack.push(node->left); 
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