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
    TreeNode* sortBST(vector<int>&nums) {
     TreeNode* root,*temp;
        root=new TreeNode(nums[nums.size()/2]);
        temp=root;
        int height1=0,height2=0;
        int i=(nums.size()/2)-1;
        int j=(nums.size()/2)+1;
        while(i>=0)
        {
          temp->left=new TreeNode(nums[i]);
          temp=temp->left;
          height1++;
            i--;
        
        
        }
        temp=root;
        while(j<nums.size())
        {
           temp->right= new TreeNode(nums[j]);
            temp=temp->right;
            height2++;
            
       j++;     
}
     if(height1>height2)
     {
         TreeNode* temp=root->left;
         TreeNode* state;
        while(!(height1==height2))
        {
            height1--;
            state=temp->left;
            temp->right=temp;
            temp=temp->left;

            


        }

     }
        return root;
        
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
    vector<int>nums(5,(1,2,3,4,5));
   TreeNode* final= obj.sortBST(nums);
   Final(final);
   
      

  }