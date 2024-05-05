vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
        vector<long long>ans;
        long long j=0;
        queue<long long>q;
        for(int i=0;i<n;i++)
        {
             if(arr[i]<0)
             q.push(arr[i]);
            if(i-j+1==k)
            {
                if(!q.empty())
                ans.push_back(q.front());
                else
                ans.push_back(0);
                if(q.front()==arr[j])
                {
                    while(!q.empty())
                    q.pop();
                    i=j;
                }
                j++;
            }
        }
        return ans;
 }
