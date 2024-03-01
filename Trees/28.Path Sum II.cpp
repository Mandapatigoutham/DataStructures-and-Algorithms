/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void fun1(TreeNode* root,vector<int>arr,vector<vector<int>>&ans)
    {
        if(root==NULL)
        return;
        arr.push_back(root->val);
        fun1(root->left,arr,ans);
        fun1(root->right,arr,ans);
        if(!root->left && !root->right)
        {
            ans.push_back(arr);
        }
    }
    bool fun2(vector<int>&arr,int val)
    {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        if(sum==val)
        return true;
        else
        return false;
    }
    vector<vector<int>> pathSum(TreeNode* root, int k) {
          vector<vector<int>>ans,ans1;
          vector<int>arr;
          fun1(root,arr,ans);
          for(int i=0;i<ans.size();i++)
          {
              if(fun2(ans[i],k))
              {
                  ans1.push_back(ans[i]);
              }
          }
          return ans1;
    }
};
