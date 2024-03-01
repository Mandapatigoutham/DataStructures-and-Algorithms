class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
        // code here
        stack<int>s;
        int root=INT_MIN;
        for(int i=0;i<N;i++)
        {
            if(arr[i]<root)
            return 0;
            while(!s.empty() && arr[i]>s.top())
            {
                root=s.top();
                s.pop();
            }
            s.push(arr[i]);
        }
        return 1;
    }
};
