/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
    if(root==NULL)
    return ans;
    queue<pair<Node*,int>>q;
    map<int,int>mp;
    q.push({root,0});
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        Node* root=it.first;
        int val=it.second;
        if(root->left)
        {
            q.push({root->left,val-1});
        }
        if(root->right)
        {
            q.push({root->right,val+1});
        }
        if(mp.find(val)==mp.end())
        {
            mp[val]=root->data;
        }
    }
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    return ans;
    }

};
