class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int l=0,r=0,ans=0;
        map<int,int>mp;
        while(r<n)
        {
            mp[s[r]]=r;
            if(mp.size()==3)
            {
                ans++;
                int mini=INT_MAX;
                for(auto it:mp)
                {
                    mini=min(mini,it.second);
                }
                ans+=mini;
            }
            r++;
        }
        return ans;
    }
};
