class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0,mod=0,pre_sum=0;
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++)
        {
            pre_sum+=nums[i];
            mod=pre_sum%k;
            if(mod<0)
            {
                mod+=k;
            }
            if(mp.find(mod)!=mp.end())
            {
                ans+=mp[mod];
            }
            mp[mod]++;
        }
        return ans;
    }
};
