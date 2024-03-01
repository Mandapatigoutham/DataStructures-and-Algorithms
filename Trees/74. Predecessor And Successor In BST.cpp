/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/
TreeNode* pre(TreeNode *root, int x)
{
    TreeNode* ans=new TreeNode(-1);
    while(root!=NULL)
    {
        if(root->data>=x)
        {
            root=root->left;
        }
        else
        {
            ans=root;
            root=root->right;
        }
    }
    return ans;
}
TreeNode* suc(TreeNode *root, int x)
{
    TreeNode* ans=new TreeNode(-1);
    while(root!=NULL)
    {
        if(root->data<=x)
        {
            root=root->right;
        }
        else
        {
            ans=root;
            root=root->left;
        }
    }
    return ans;
}
pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.
    TreeNode* pr=pre(root,key);
    TreeNode* su=suc(root,key);
    return {pr->data,su->data};
}
