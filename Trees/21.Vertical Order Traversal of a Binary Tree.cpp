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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        return ans;
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>mp;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int vertical=it.second.first;
            int level=it.second.second;
            if(node->left)
            {
                q.push({node->left,{vertical-1,level+1}});
            }
            if(node->right)
            {
                q.push({node->right,{vertical+1,level+1}});
            }
            mp[vertical][level].insert(node->val);
        }
        for(auto a:mp)
        {
            vector<int>temp;
            for(auto b:a.second)
            {
                for(auto c:b.second)
                {
                    temp.push_back(c);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
