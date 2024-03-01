/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void parentnodes(TreeNode* root,map<TreeNode*,TreeNode*>&mp)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
            TreeNode* root=q.front();
            q.pop();
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
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
         map<TreeNode*, TreeNode*> mp;
        parentnodes(root, mp);
        map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        int cnt = 0;
        while (!q.empty()) {
            if (cnt == k)
                break;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* current = q.front();
                q.pop();
                visited[current] = true;
                if (current->left && !visited[current->left]) {
                    q.push(current->left);
                }
                if (current->right && !visited[current->right]) {
                    q.push(current->right);
                }
                if (mp[current] && !visited[mp[current]]) {
                    q.push(mp[current]);
                }
            }
            cnt++;
        }

        vector<int> ans;
        while (!q.empty()) {
            int val = q.front()->val;
            q.pop();
            ans.push_back(val);
        }
        return ans;
     }
};
