Node * deleteHead(Node *head) {
    // Write your code here.
    if(head==NULL)
    {
        return head;
    }
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
