Node* insertBeforeValue(Node* head, int x, int val){
    // Write your code here.
    if(head->data==val)
    {
        Node* newnode=new Node(x);
        newnode->next=head;
        return newnode;
    }
    Node* temp=head;
    while(temp->next)
    {
        if(temp->next->data==val)
        {
            Node* newnode=new Node(x);
            newnode->next=temp->next;
            temp->next=newnode;
            break;
        }
        temp=temp->next;
    }
    return head;
}
