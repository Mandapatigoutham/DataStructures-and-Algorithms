/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     TreeNode*  parentnodes(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&mp,int &k)
    {
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* knode;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
            TreeNode* root=q.front();
            q.pop();
            if(root->val==k)
            knode=root;
            if(root->left)
            {
                mp[root->left]=root;
                q.push(root->left);
            }
            if(root->right)
            {
                mp[root->right]=root;
                q.push(root->right);
            }
            }
        }
        return knode;
    }
    int fun(TreeNode* knode,unordered_map<TreeNode*,TreeNode*>&mp)
    {
        map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(knode);
        int cnt=0;
        while(!q.empty())
        {
            int temp=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* root=q.front();
                q.pop();
                visited[root]=1;
                if(root->left && !visited[root->left]) 
                {
                    temp=1;
                    visited[root->left]=1;
                    q.push(root->left);
                }
                 if(root->right && !visited[root->right])
                {
                    temp=1;
                    visited[root->right]=1;
                    q.push(root->right);
                }
                if(mp[root] && !visited[mp[root]])
                {
                    temp=1;
                    visited[mp[root]]=1;
                    q.push(mp[root]);
                }
            }
            if(temp)
            cnt++;
        }
        return cnt;
    }
    int amountOfTime(TreeNode* root, int k) {
         unordered_map<TreeNode*, TreeNode*> mp;
        TreeNode* knode=parentnodes(root, mp,k);
        int ans=fun(knode,mp);
        return ans;
    }
};
