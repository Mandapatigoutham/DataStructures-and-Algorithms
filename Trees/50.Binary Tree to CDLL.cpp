/* Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    Node *prev=NULL,*head=NULL;
    void fun(Node* root)
    {
        if(root==NULL)
        return;
        fun(root->left);
        if(prev==NULL)
        {
            prev=root;
            head=root;
        }
        else
      {
         prev->right=root;
         root->left=prev;
         prev=root;
      }
      fun(root->right);
    }
    Node *bTreeToCList(Node *root)
    {
    //add code here.
    if(!root)
    return NULL;
     fun(root);
     head->left=prev;
     prev->right=head;
        return head;
    }
};
