void fun(BinaryTreeNode<int>* root,int level,vector<int>&ans)
{
    if(root==NULL)
    return;
    if(level==ans.size())
    ans.push_back(root->data);
    fun(root->left,level+1,ans);
    fun(root->right,level+1,ans);
}
vector<int> printLeftView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int>ans;
    fun(root,0,ans);
    return ans;
}
