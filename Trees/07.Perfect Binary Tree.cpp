/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    bool isPerfect(Node *root)
    {
        //code here
        queue<Node*>q;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            int n=q.size();
            if(n!=pow(2,level))
            return false;
            for(int i=0;i<n;i++)
            {
                Node* root=q.front();
                q.pop();
                if(root->left)
                {
                    q.push(root->left);
                }
                if(root->right)
                {
                    q.push(root->right);
                }
            }
            level++;
        }
        return true;
    }
};
