/*struct Node
{
	int data;
	Node *left, *right;
};*/

Node* insert(Node* root,int ele)
{
    if(root==NULL)
    return new Node(ele);
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
Node *constructTree (int post[], int size)
{
//code here. 
Node* root=NULL;
for(int i=0;i<size;i++)
{
    root=insert(root,post[i]);
}
return root;
}
