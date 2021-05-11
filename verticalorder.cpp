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
void vertical(node* root,int pos,int hd)
{
    if(root==NULL)
       return;
    if(pos==hd)
       cout<<root->data<<" ";
    vertical(root->left,pos,hd-1);
    vertical(root->right,pos,hd+1);
}
void verticalordertraversal(node* root,int* min,int *max,int hd)
{
    if(root==NULL)
       return;
  
    if(hd< *min)
    {
        *min=hd;
    }
    else if(hd> *max)
    {
        *max=hd;
    }
    verticalordertraversal(root->left,min,max,hd-1);
    verticalordertraversal(root->right,min,max,hd+1);



}
void verticalorder(node* root)
{
    int min=0,max=0;
    verticalordertraversal(root,&min,&max,0);
    for(int i=min;i<=max;i++)
    {
        vertical(root,i,0);
        cout<<endl;

    }

}
int main()
{
    node* root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->left->left=new node(2);
    root->left->right=new node(7);
    root->right->left=new node(12);
    root->right->right=new node(20);
    verticalorder(root);




}