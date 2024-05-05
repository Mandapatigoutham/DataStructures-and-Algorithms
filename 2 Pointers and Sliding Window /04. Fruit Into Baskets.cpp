class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0,r=0,ans=0,k=2;
        map<int,int>mp;
        while(r<n)
        {
            mp[fruits[r]]++;
            if(mp.size()<=k)
            {
                ans=r-l+1;
            }
            else
            {
                while(mp.size()>k)
                {
                    mp[fruits[l]]--;
                    if(mp[fruits[l]]==0)
                    mp.erase(fruits[l]);
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};
