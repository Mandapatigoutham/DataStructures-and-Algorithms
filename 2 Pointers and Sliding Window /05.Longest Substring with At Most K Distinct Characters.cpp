#include<bits/stdc++.h>
int kDistinctChars(int k, string &str)
{
    // Write your code here
    int n=str.size();
    int l=0,r=0,ans=0;
    map<int,int>mp;
    while(r<n)
    {
        mp[str[r]]++;
        if(mp.size()<=k)
        {
            ans=max(ans,r-l+1);
        }
        else {
            while(mp.size()>k)
            {
                mp[str[l]]--;
                if(mp[str[l]]==0)
                {
                    mp.erase(str[l]);
                }
                l++;
            }
        }
        r++;
    }
    return ans;
}


