/*struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       if(root==NULL)
       return;
       queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
           while(n--)
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
                root->nextRight=(n)?q.front():NULL;
            }
        }
    }    
      
};
