/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

 void fun(Node* root,vector<int>&ans)
    {
        queue<Node*>q;
        q.push(root);
        int temp=false;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>ans1(n);
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
                int idx=(temp)?i:n-i-1;
                ans1[idx]=root->data;
            }
            temp=!temp;
            for(int i=0;i<ans1.size();i++)
            {
                ans.push_back(ans1[i]);
            }
        }
    }
//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
     vector<int>ans;
      fun(root,ans);
      return ans;
}
