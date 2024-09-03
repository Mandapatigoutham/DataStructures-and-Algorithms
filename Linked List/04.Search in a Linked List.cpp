int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    while(head)
    {
        if(head->data==k)
        return 1;
        head=head->next;
    }
    return 0;
}
