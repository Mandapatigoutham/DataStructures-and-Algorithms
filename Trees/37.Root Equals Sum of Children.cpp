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
    bool checkTree(TreeNode* root) {
        int ans=0;
        if(root->left)
        {
            ans+=root->left->val;
        }
        if(root->right)
        {
            ans+=root->right->val;
        }
        if(ans==root->val)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
