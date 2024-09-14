Node * insert(Node * head, int n, int pos, int val) {
    // Write your code here
    if(pos==0)
    {
        Node* newnode=new Node(val);
        newnode->next=head;
        return newnode;
    }
    int cnt=0;
    Node* temp=head;
    while(temp)
    {
        if(cnt==pos-1)
        {
            Node* newnode=new Node(val);
            newnode->next=temp->next;
            temp->next=newnode;
            break;
        }
        cnt++;
        temp=temp->next;
    }
    return head;
}
