class Solution {
public:
    void solve(TreeNode *root,int targetSum,vector<int> sum,int &c)
    {
        if(!root)
            return;
        sum.push_back(root->val);
        long long int csum=0;
        for(int i=sum.size()-1;i>=0;i--)
        {
            csum+=sum[i];
            if(csum==targetSum)
                c++;
        }
        solve(root->left,targetSum,sum,c);
        solve(root->right,targetSum,sum,c);
    }
    int pathSum(TreeNode* root, int targetSum) {
        int c=0;
        vector<int> sum;
        solve(root,targetSum,sum,c);
        return c;
    }
};
