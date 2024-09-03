Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
         Node* temp=new Node(arr[i]);
         mover->next=temp;
         mover=temp;
    } 
    return head;
}
