int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        map<int,int>mp;
        int i=0,ans=0,sum=0;
        mp[0]=-1;
        while(i<n)
        {
            sum+=arr[i];
            if(mp.find(sum)==mp.end())
            mp[sum]=i;
            if(mp.find(sum-k)!=mp.end())
            ans=max(ans,i-mp[sum-k]);
            i++;
        }
        return ans;
    } 
