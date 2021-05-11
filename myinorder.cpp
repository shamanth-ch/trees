#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
    node(int x)
    {
        data = x;
        left=right=NULL;
    }
};
void inorder(struct node* root)
{
    if (root==NULL)
        return;
    stack<node*>status_stack;

    while(root!=NULL || !status_stack.empty())
    { 
        while(root!=NULL)
        {
            status_stack.push(root);
            root=root->left;
            
        }
        node* curr=status_stack.top();
        status_stack.pop();
        cout<<curr->data<<" ";
        root=curr->right;
        


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
    inorder(root);
}