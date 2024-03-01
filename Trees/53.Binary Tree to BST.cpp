/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
*/

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void fun(Node *root,vector<int>&ans)
    {
        if(root==NULL)
        return;
        ans.push_back(root->data);
        fun(root->left,ans);
        fun(root->right,ans);
    }
    Node* insert(Node* root,int ele)
    {
        if(root==NULL)
        {
            Node* nn=new Node(ele);
            return nn;
        }
        if(ele<root->data)
        {
            root->left=insert(root->left,ele);
        }
        else
        {
            root->right=insert(root->right,ele);
        }
        return root;
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>ans;
        fun(root,ans);
        Node* root1=NULL;
        for(int i=0;i<ans.size();i++)
        {
            root1=insert(root1,ans[i]);
        }
        return root1;
    }
};
