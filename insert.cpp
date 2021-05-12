#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node* right;

node(int data)
{
    this->data=data;
    this->left=this->right=NULL;

}
};
node* insert(node* root,int data)
{
   node* temp=root;
   while(temp->left!=NULL || temp->right!=NULL )
{
    if(temp->data<data)
    {
        temp=temp->right;
    }
    else
    {
        temp=temp->left;
    }
}
if(temp->left==NULL && data<temp->data)
{
    temp->left=new node(data);
}
if(temp->right==NULL && data>temp->data) 
{
    temp->right= new node(data);
}
return root;


}
void print(node* root)
{
    if(root==NULL)
       return;
    cout<<root->data;
    print(root->left);
 
    print(root->right);
}
int main()
{
    struct node* root=new node(4);
    root->left=new node(2);
    root->right= new node(7);
    root->left->left= new node(1);
    root->left->right=new node(3);
    
    insert(root,6);
    print(root);



}
