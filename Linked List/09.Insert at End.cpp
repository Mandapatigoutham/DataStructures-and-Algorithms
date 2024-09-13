Node* insertEnd(Node* head, int k) {
    // Write your code here.
    if(head==NULL)
    {
        return new Node(k);
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node* newnode=new Node(k);
    temp->next=newnode;
    return head;
}
