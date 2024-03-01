/* Structure for tree and linked list

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
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
    Node * bToDLL(Node *root)
    {
        // your code here
        fun(root);
        return head;
    }
};
