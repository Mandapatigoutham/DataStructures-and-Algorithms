void inorder(vector<int>&ans,TreeNode *root)
{
    if(root==NULL)
    return;
    inorder(ans,root->left);
    ans.push_back(root->data);
    inorder(ans,root->right);
}
void preorder(vector<int>&ans,TreeNode *root)
{
    if(root==NULL)
    return;
     ans.push_back(root->data);
    preorder(ans,root->left);
    preorder(ans,root->right);
}
void postorder(vector<int>&ans,TreeNode *root)
{
    if(root==NULL)
    return;
    postorder(ans,root->left);
    postorder(ans,root->right);
     ans.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>>ans(3);
    inorder(ans[0],root);
    preorder(ans[1],root);
    postorder(ans[2],root);
    return ans;
}
