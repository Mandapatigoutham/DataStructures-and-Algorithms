/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
bool isLeaf(TreeNode<int> *root)
{
    if(!root->left && !root->right)
    return true;
    else
    return false;
}
void addleftboundary(TreeNode<int> *root,vector<int>&ans)
{
    TreeNode<int> *node=root->left;
    while(node)
    {
        if(!isLeaf(node))
        ans.push_back(node->data);
        if(node->left)
        node=node->left;
        else
        node=node->right;
    }
}
void addleafs(TreeNode<int> *root,vector<int>&ans)
{
    if(isLeaf(root))
    {
        ans.push_back(root->data);
        return;
    }
    if(root->left)
    addleafs(root->left,ans);
    if(root->right)
    addleafs(root->right,ans);
}
void addrightboundary(TreeNode<int> *root,vector<int>&ans)
{
    TreeNode<int> *node=root->right;
    vector<int>temp;
    while(node)
    {
        if(!isLeaf(node))
        temp.push_back(node->data);
        if(node->right)
        node=node->right;
        else
        node=node->left;
    }
    for(int i=temp.size()-1;i>=0;i--)
    {
        ans.push_back(temp[i]);
    }
}
vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int>ans;
    if(root==NULL)
    return ans;
    if(!isLeaf(root))
    ans.push_back(root->data);
    addleftboundary(root,ans);
    addleafs(root,ans);
    addrightboundary(root,ans);
    return ans;
}
