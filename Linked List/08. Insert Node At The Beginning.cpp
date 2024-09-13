Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    Node* newnode=new Node(newValue);
    newnode->next=list;
    return newnode;
    // return new Node(newnode,list);
}
