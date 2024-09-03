int length(Node *head)
{
	//Write your code here
    int ans=0;
    while(head)
    {
        ans++;
        head=head->next;
    }
    return ans;
}
