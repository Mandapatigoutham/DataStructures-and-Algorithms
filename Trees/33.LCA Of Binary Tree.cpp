/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	//    Write your code here
    if(root==NULL)
    return -1;
    if(root->data==x || root->data==y)
    return root->data;
    int lh=lowestCommonAncestor(root->left,x,y);
    int rh=lowestCommonAncestor(root->right,x,y);
    if(lh==-1)
    return rh;
    else if(rh==-1)
    return lh;
    else
    return root->data;
}
