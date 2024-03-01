int Floor(BinaryTreeNode<int> *node, int x)
{
	int ans=-1;
    while(node)
    {
        if(x==node->data)
    return node->data;
    else if(x<node->data)
    {
        node=node->left;
    }
    else
    {
        ans=node->data;
		node=node->right;
    }
}
    return ans;
}
