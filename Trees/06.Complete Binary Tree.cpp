class Solution{
public:    
    bool isCompleteBT(Node* root){
        //code here
        queue<Node*> Q;
        
        Q.push(root);
        
        while(!Q.empty() && Q.front() != NULL)
        {
            Node* curr = Q.front();
            Q.pop();
            Q.push(curr->left);
            Q.push(curr->right);
        }
        
        while(!Q.empty())
        {
            if(Q.front() != NULL)return false;
            Q.pop();
        }
        return true;
    }
};
