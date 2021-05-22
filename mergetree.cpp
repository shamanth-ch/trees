#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  class solution
  {
      public :
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* curr1=root1;
        TreeNode* curr2=root2;
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
    
        while(((curr1!=NULL || !s1.empty()) || (curr2!=NULL ||!s2.empty())))
        {
           
            
              while(curr1!=NULL || curr2!=NULL)
              { 

                  if(curr1 && curr2)
                     {
                         curr1->val=curr1->val+curr2->val;
                      
                         s1.push(curr1);
                         s2.push(curr2);
                     }
                else if(curr1!=NULL && curr2==NULL)
                 {
                        curr2=new TreeNode(0);
                         curr1->val=curr1->val+curr2->val;
                
                         s1.push(curr1);
                         s2.push(curr2);

                 }
                     else if(curr1==NULL && curr2!=NULL)
                 {
                        curr1=new TreeNode();
                      

                         curr1->val=curr1->val+curr2->val;
                      
                         s1.push(curr1);
                         s2.push(curr2);

                 }
                  if(curr2->left && curr1->left==NULL)
                  {
                      curr1->left=new TreeNode();
                  }
                  if(curr2->right && curr1->right==NULL)
                  {
                      curr1->right= new TreeNode();
                  }

               curr1=curr1->left;
               curr2=curr2->left;
       }
    
    curr1= s1.top();
    curr2=s2.top();

    s1.pop();

    s2.pop();
   
    curr1=curr1->right;
    curr2=curr2->right;
  




        }
        return root1;

      
    }
      
  };
  void Final(TreeNode* final)
  {
      if(final==NULL)
         return ;
      else
      Final(final->left);
      cout<<final->val<<" ";
      Final(final->right);
  }
  int main()
  {
      solution obj;
      TreeNode* root1,*root2;
      root1= new TreeNode(5);
      root1->left=new TreeNode(3);
     // root1->left->left= new TreeNode(2);
      root1->left->right= new TreeNode(4);
      root1->right=new TreeNode(7);
      root1->right->left=new TreeNode(6);
      root2= new TreeNode(5);
      root2->left=new TreeNode(3);
      root2->left->left= new TreeNode(2);
      root2->left->right= new TreeNode(4);
      root2->right=new TreeNode(7);
      root2->right->left=new TreeNode(6);
      root2->right->right= new TreeNode(8);
   TreeNode* final= obj.mergeTrees(root1,root2);
   Final(final);
   
      

  }