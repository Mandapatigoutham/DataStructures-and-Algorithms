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
    TreeNode* fun(vector<int>&preorder,vector<int>&inorder,int prestart,int preend,int instart,int inend,map<int,int>&mp)
    {
        if(prestart>preend || instart>inend)
        return NULL;
        TreeNode* root=new TreeNode(preorder[prestart]);
        int ele=mp[root->val];
        int nele=ele-instart;
        root->left=fun(preorder,inorder,prestart+1,prestart+nele,instart,ele-1,mp);
        root->right=fun(preorder,inorder,prestart+nele+1,preend,ele+1,inend,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int prestart=0,preend=preorder.size()-1,instart=0,inend=inorder.size()-1;
        map<int,int>mp;
        for(int i=instart;i<=inend;i++)
        {
            mp[inorder[i]]=i;
        }
       return fun(preorder,inorder,prestart,preend,instart,inend,mp);
    }
};
