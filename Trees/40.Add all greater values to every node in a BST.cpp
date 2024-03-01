/*
Node structure is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// modify the BST and return its root
void fun(Node* root,int &sum)
{
    if(!root)
    return;
    fun(root->right,sum);
    sum+=root->data;
    root->data=sum;
     fun(root->left,sum);
}
Node* modify(Node *root)
{
    // Your code here
    int ans=0;
    fun(root,ans);
    return root;
}
