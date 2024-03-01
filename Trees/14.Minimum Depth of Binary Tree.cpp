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
    int fun1(TreeNode* root)
    {
            if(root==NULL)
        return 0;
        int  lh=minDepth(root->left);
         int  rh=minDepth(root->right);
         return 1+min(lh,rh);
    }
     int fun2(TreeNode* root)
    {
            if(root==NULL)
        return 0;
        int  lh=minDepth(root->left);
         int  rh=minDepth(root->right);
         return 1+max(lh,rh);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        if(root->left==NULL|| root->right==NULL)
        {
            return fun2(root);
        }
        else
        {
            return fun1(root);
        }
    }
};
