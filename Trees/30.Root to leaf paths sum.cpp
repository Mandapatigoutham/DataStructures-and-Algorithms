/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

/*You are required to complete below method */
void fun(Node* root,long long arr,long long &ans)
{
    if(root==NULL)
    return;
    arr=arr*10+root->data;
    fun(root->left,arr,ans);
    fun(root->right,arr,ans);
    if(!root->left && !root->right)
    ans+=arr;
}
long long treePathsSum(Node *root)
{
    //Your code here
    long long ans=0,arr=0;
    fun(root,arr,ans);
    return ans;
    
}
