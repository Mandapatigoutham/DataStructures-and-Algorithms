//User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more 
// than the max key in BST, return -1 
void fun(Node* root,int &ans,int &cnt,int k)
{
    if(root==NULL)
    return;
    fun(root->left,ans,cnt,k);
    cnt++;
    if(cnt<=k)
    {
        ans+=root->data;
    }
      fun(root->right,ans,cnt,k);
}
int sum(Node* root, int k) 
{ 
  
    // Your code here
    int cnt=0,ans=0;
    fun(root,ans,cnt,k);
    return ans;
    
}
