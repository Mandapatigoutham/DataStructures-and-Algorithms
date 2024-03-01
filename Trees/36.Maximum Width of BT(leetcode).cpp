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
    int widthOfBinaryTree(TreeNode* root) {
           if(!root)
           return 0;
           int ans=0;
           queue<pair<TreeNode*,int>>q;
           q.push({root,0});
           while(!q.empty())
           {
               int n=q.size();
               int last,first;
               int mini=q.front().second;
               for(int i=0;i<n;i++)
               {
                    auto it=q.front();
                    q.pop();
                    int val=it.second-mini;
                    TreeNode* node=it.first;
                    if(node->left)
                    {
                        q.push({node->left,2LL*val+1});
                    }
                    if(node->right)
                    {
                        q.push({node->right,2LL*val+2});
                    }
                    if(i==0)
                    first=val;
                    if(i==n-1)
                    last=val;
               }
               ans=max(ans,last-first+1);
           }
           return ans;
    }
};
