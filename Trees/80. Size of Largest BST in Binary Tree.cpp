/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
class NodeValue

{

    public:

        int minNode , maxNode , maxSize;

 

        NodeValue(int minNode , int maxNode , int maxSize)

        {

            this->maxNode = maxNode;

            this->minNode = minNode;

            this->maxSize = maxSize;

        }

};

NodeValue largestBSTSubTreeHelper(TreeNode * root)

{

    if(root == NULL)    

    {

        return NodeValue(INT_MAX , INT_MIN , 0);

    }

    auto left  =  largestBSTSubTreeHelper(root->left);

    auto right =  largestBSTSubTreeHelper(root->right);

 

    if(left.maxNode < root->data && root->data < right.minNode)

    {

        int newMinValue = min(root->data , left.minNode);

        int newMaxValue = max(root->data , right.maxNode);

        int newMaxSize = left.maxSize + right.maxSize + 1;

        return NodeValue(newMinValue , newMaxValue , newMaxSize);

    }

    return NodeValue(INT_MIN , INT_MAX , max(left.maxSize , right.maxSize));

}

int largestBST(TreeNode * root){

    NodeValue ans = largestBSTSubTreeHelper(root) ;

    return ans.maxSize;

    // Write your code here.

}

