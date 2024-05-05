 long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int ans=INT_MIN;
        long long int ksum=0;
        long long int sum=0;
        for(int i=0;i<k;i++)
        {
            ksum+=a[i];
        }
        sum=ksum;
        ans=ksum;
        for(int i=k;i<n;i++)
        {
            ksum+=a[i]-a[i-k];
            sum=max(sum+a[i],ksum);
            ans=max(ans,sum);
        }
        return ans;
    }
