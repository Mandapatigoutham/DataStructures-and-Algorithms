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
    bool hasPathSum(TreeNode* root, int x) {
        if(root==NULL)
        return false;
        vector<int>ans;
        fun(root,ans,0);
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==x)
            return true;
        }return false;
    }
    void fun(TreeNode* root,vector<int>&ans,int sum)
    {
        if(root==NULL)
        return;
        sum+=root->val;
        fun(root->left,ans,sum);
        fun(root->right,ans,sum);
        if(!root->left && !root->right)
        {
            ans.push_back(sum);
        }
    }
};
