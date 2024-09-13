Node *deleteLast(Node *list){
    // Write your code here
    if(list==NULL)
    {
        return list;
    }
    Node* temp=list;
    while(temp->next->next)
    {
        temp=temp->next;
    }
    Node* var=temp->next;
    free(var);
    temp->next=NULL;
    return list;
}
