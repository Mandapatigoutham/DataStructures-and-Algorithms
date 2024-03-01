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
    TreeNode* fun(vector<int>&postorder,vector<int>&inorder,int poststart,int postend,int instart,int inend,map<int,int>&mp)
    {
        if(poststart>postend || instart>inend)
        return NULL;
        TreeNode* root=new TreeNode(postorder[postend]);
        int ele=mp[root->val];
        int nele=ele-instart;
        root->left=fun(postorder,inorder,poststart,poststart+nele-1,instart,ele-1,mp);
        root->right=fun(postorder,inorder,poststart+nele,postend-1,ele+1,inend,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         int poststart=0,postend=postorder.size()-1,instart=0,inend=inorder.size()-1;
        map<int,int>mp;
        for(int i=instart;i<=inend;i++)
        {
            mp[inorder[i]]=i;
        }
       return fun(postorder,inorder,poststart,postend,instart,inend,mp);
    }
};
