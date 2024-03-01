/*Complete the function below
Node is as follows:
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
// Return True if the given Binary Tree is a Full Binary Tree. Else return False
bool isFullTree (struct Node* node)
{
//add code here.
 if(node == NULL) return true;
        
        if(node->left == NULL && node->right == NULL) return true;
        
        if(node->left != NULL && node->right != NULL)
        {
            return (isFullTree(node->right) && isFullTree(node->left));
        }    
        return false;
}
