#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* right;
    node* left;
    node(int data)
    {
        data=data;
        left=right=NULL;
    }
};
int height(node* root)
{
    if(root==NULL)
      return 0;
queue<node*>status_queue;
status_queue.push(root);
int height=0;
while(1)
{

int nodecount=status_queue.size();
if(nodecount==0)
   return height;
height++;
while(nodecount>0)
{
    node* root=status_queue.front();
    status_queue.pop();
     if(root->left)
       status_queue.push(root->left);
    if(root->right)
       status_queue.push(root->right);
    nodecount--;

}
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
   cout<<height(root)<<endl;
    

}


