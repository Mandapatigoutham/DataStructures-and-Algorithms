/********************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode {
        public :
        int data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
    
********************************************************************/
void fun(BinaryTreeNode<int> * root,vector<string> &ans,string curr)
{
    if(root==NULL)
    return;
    curr+=to_string(root->data)+" ";
    fun(root->left,ans,curr);
    fun(root->right,ans,curr);
    if(!root->left && !root->right)
    {
        ans.push_back(curr);
    }
}
vector <string> allRootToLeaf(BinaryTreeNode<int> * root) {
    // Write your code here.
    vector <string> ans;
    fun(root,ans,"");
    return ans;
}
