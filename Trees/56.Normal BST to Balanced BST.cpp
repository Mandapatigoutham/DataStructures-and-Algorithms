/*Structure of the Node of the BST is as
struct Node
{
	int data;
	Node* left, *right;
};
*/

class Solution{
    
    public:
    // Your are required to complete this function
    // function should return root of the modified BST
    void fun(Node *root,vector<int>&ans)
    {
        if(root==NULL)
        return;
        fun(root->left,ans);
         ans.push_back(root->data);
        fun(root->right,ans);
    }
        Node* getElement(vector<int>v,int low,int high){
        if(low>high) return NULL;
        int mid=(low+high)/2;
        Node* newnode=new Node(v[mid]);
        newnode->left=getElement(v,low,mid-1);
        newnode->right=getElement(v,mid+1,high);
        return newnode;
    }
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	 vector<int>ans;
        fun(root,ans);
        root=getElement(ans,0,ans.size()-1);
        return root;
    }
};
