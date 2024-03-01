/*  Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
// return the head of the DLL and remove those node from the tree as well.
Node* preorder(Node* root, Node*& head, Node*& prev){
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        if(prev==NULL){
        	// insertion of head in DLL
            head = prev = root;
        }
        else{
            // insertion into DLL
            prev->right = root;
            root->left = prev;
            prev = root;
        }
        return NULL; // removing leaf node from tree
    }
    
    root->left = preorder(root->left, head, prev);
    root->right = preorder(root->right, head, prev);
    return root;
}
Node * convertToDLL(Node *root){
    // add code here.
     if(root==NULL){
        return NULL;
    }
    Node* head = NULL;
    Node* prev = NULL;
    preorder(root,head,prev);
    return head;
}
