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
TreeNode* first;
    TreeNode* middle;
    TreeNode* last;
    void inorder(TreeNode* root,TreeNode* &prev)
    {
        if(root==NULL)
        return;
        inorder(root->left,prev);
        if(root->val<prev->val)
        {
            if(first==NULL)
            {
                first=prev;
                middle=root;
            }
            else
            {
                last=root;
            }
        }
        prev=root;
        inorder(root->right,prev);
    }
    void recoverTree(TreeNode* root) {
        first=middle=last=0;
       TreeNode* prev=new TreeNode(INT_MIN);
        inorder(root,prev);
        if(first && last)
        swap(first->val,last->val);
        else
        swap(first->val,middle->val);
    }
};
