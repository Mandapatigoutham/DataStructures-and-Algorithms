class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>map(128,0);
        int l=0,r=0,minlen=INT_MAX,cnt=0,ind=-1;
        for(auto it:t)
        {
            map[it]++;
        }
        while(r<s.size())
        {
            if(map[s[r]]>0)
            {
                cnt++;
            }
            map[s[r]]--;
            while(cnt==t.size())
            {
                if(r-l+1<minlen)
               {
                 minlen=r-l+1;
                ind=l;
               }
               map[s[l]]++;
               if(map[s[l]]>0)
               {
                cnt--;
               }
               l++;
            }
            r++;
        }
        return minlen==INT_MAX?"":s.substr(ind,minlen);
    }
};
