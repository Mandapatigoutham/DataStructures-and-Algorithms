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
    int goodNodes(TreeNode* root,int maxi=INT_MIN) {
        if(!root)
        return 0;
        return (maxi<=root->val?1:0)+goodNodes(root->left,max(root->val,maxi))+goodNodes(root->right,max(root->val,maxi));
    }
};
