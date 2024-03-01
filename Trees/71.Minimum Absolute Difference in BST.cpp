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
    TreeNode* prev=NULL;
    void fun(TreeNode* root,int &ans)
    {
        if(!root)
        return;
        fun(root->left,ans);
        if(prev)
        ans=min(ans,abs(prev->val-root->val));
        prev=root;
        fun(root->right,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        int ans=INT_MAX;
        fun(root,ans);
        return ans;
    }
};
