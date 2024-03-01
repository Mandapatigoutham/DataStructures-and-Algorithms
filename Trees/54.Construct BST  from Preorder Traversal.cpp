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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       TreeNode* root=NULL;
       int size=preorder.size();
for(int i=0;i<size;i++)
{
    root=insert(root,preorder[i]);
}
return root;
    }
    TreeNode* insert(TreeNode* root,int ele)
{
    if(root==NULL)
    return new TreeNode(ele);
    if(ele<root->val)
    {
        root->left=insert(root->left,ele);
    }
    else
    {
         root->right=insert(root->right,ele);
    }
    return root;
}
};
