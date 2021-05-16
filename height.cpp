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
int height(node* root,int v)
  {
      int height=0;
      if(root->data==v)
          return height;
      while(root->data!=v)
      {
          if(root->data<v)
          {
             root=root->right;
             height++;
          }
           else {
             root=root->left;
             height++;
              }  
             
      }
      return height;
  }
        

int main()
{

 
     node* root = new node(10);
    root->left = new node (5);
    root->right = new node(15);
    root->left->left = new node(2);
    root->left->right = new node(7);
    root->right->left = new node(15);
   cout<<height(root,2)<<endl;
    

}


