class Solution {
  public:
    // Function to display the elements of a linked list
    void display(Node *head) {
        // your code goes here
        Node* temp=head;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
