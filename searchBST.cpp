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
  class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* curr=root;
        if(root==NULL)
          {return root;}
        else if(root->val==val)
        {
            return root;
        }
       else if(root->val>val)
        {
              return searchBST(root->left,val);
        }
        else 
       
    return searchBST(root->right,val);


        
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
      Solution obj;
      TreeNode* root1,*root2;
      root1= new TreeNode(4);
      root1->left=new TreeNode(2);
      root1->left->left= new TreeNode(1);
      root1->left->right= new TreeNode(3);
      root1->right=new TreeNode(7);
     // root1->right->left=new TreeNode(6);
    
   TreeNode* final= obj.searchBST(root1,5);
   Final(final);
   
      

  }