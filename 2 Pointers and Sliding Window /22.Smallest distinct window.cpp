 int findSubString(string str)
    {
        // Your code goes here   
        int n=str.size();
        set<char>s;
        for(int i=0;i<n;i++)
        {
            s.insert(str[i]);
        }
        int k=s.size();
        int ans=INT_MAX;
        int l=0,r=0;
        unordered_map<char,int>mp;
        while(r<n)
        {
            mp[str[r]]++;
            while(mp.size()==k)
            {
                ans=min(ans,r-l+1);
                mp[str[l]]--;
                if(mp[str[l]]==0)
                mp.erase(str[l]);
                l++;
            }
            r++;
        }
       return ans;
    }
