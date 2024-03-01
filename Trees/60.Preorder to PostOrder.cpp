/*

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

*/

class Solution{
public:
    //Function that constructs BST from its preorder traversal.\
     
     Node* insert(Node* root,int ele)
  {
    if(root==NULL)
    {
        Node* nn=(Node *)malloc( sizeof( Node ) );
        nn->data=ele;
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
    Node* post_order(int pre[], int size)
    {
        //code here
        Node* root=NULL;
for(int i=0;i<size;i++)
{
    root=insert(root,pre[i]);
}
return root;
    }
};
