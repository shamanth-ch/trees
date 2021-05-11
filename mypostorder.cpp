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
void postorder(struct node* root)
{
        stack<node*>status_stack;
        do
        {
            while(root!=NULL)
            {
                if(root->right)
                {
                    status_stack.push(root->right);
                }
                status_stack.push(root);
                root=root->left;

            }
           root=status_stack.top();
          status_stack.pop();
            if(root->right && status_stack.top()==root->right)
            {
                status_stack.pop();
                status_stack.push(root);
                root=root->right;
            }
            else{
                printf("%d ",root->data);
                root=NULL;
            }


        } while (!status_stack.empty());
        
     
}
int main()
{
    struct node* root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->left->left= new node(2);
    root->left->right=new node(7);
    root->right->left=new node(12);
    root->right->right=new node(17);
    postorder(root);
}
