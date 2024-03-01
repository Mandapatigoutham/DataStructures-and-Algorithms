class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
class Solution {
public:
   void fun(Node *root,vector<int>&ans)
    {
        if(root==NULL)
        return;
         ans.push_back(root->data);
        fun(root->left,ans);
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
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>ans;
        Node* root=getElement(nums,0,nums.size()-1);
        fun(root,ans);
        return ans;
    }
};
