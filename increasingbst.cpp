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
 vector<int> inorder(TreeNode* root,vector<int>&v)
 {
         TreeNode* curr=root;
        
      
         
         stack<TreeNode*>status;

        while(!status.empty() || curr!=NULL)
           {
            
               while(curr!=NULL)
               {
                  
               status.push(curr);
               curr=curr->left;
               }
        
        
           curr=status.top();
           status.pop();
           cout<<curr->val;
           v.push_back(curr->val);
         curr=curr->right;
           }

    return v;    
    
 }
    TreeNode* increasingBST(TreeNode* root) {
           vector<int>v;
           inorder(root,v);
           for(int i=0;i<v.size();i++)
           {
              cout<<v[i]<<" ";
           }
           TreeNode* temp,*curr;
           
         temp=new TreeNode(v[0]);
         curr=temp;
           for(int i=1;i<v.size();i++)
           {
            curr->right=new TreeNode(v[i]);
            curr=curr->right;         
            
        
              // cout<<curr->r<<" "<<curr->left<<curr->right<<"\n";
              
               
           }

           return temp;
      
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
      root1= new TreeNode(5);
      root1->left=new TreeNode(3);
      root1->left->left= new TreeNode(2);
      root1->left->right= new TreeNode(4);
      root1->right=new TreeNode(7);
      root1->right->left=new TreeNode(6);
    
   TreeNode* final= obj.increasingBST(root1);
   Final(final);
   
      

  }