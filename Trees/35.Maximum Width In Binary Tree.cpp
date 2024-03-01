/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    int ans=0;
    if(root==NULL)
    return ans;
    queue<TreeNode<int> *>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        ans=max(ans,n);
        for(int i=0;i<n;i++)
        {
            TreeNode<int> *node=q.front();
            q.pop();
            if(node->left)
            {
                q.push(node->left);
            }
            if(node->right)
            {
                q.push(node->right);
            }
        }
    }
    return ans;

}
