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
     int maxlength=0;
     void fun(TreeNode* root,int dir,int currlength)
     {
         if(!root)
         return;
         maxlength=max(maxlength,currlength);
         fun(root->left,0,(dir)?currlength+1:1);
         fun(root->right,1,(dir)?1:currlength+1);
     }
    int longestZigZag(TreeNode* root) {
        fun(root,0,0);
        fun(root,1,0);
        return maxlength;
    }
};
