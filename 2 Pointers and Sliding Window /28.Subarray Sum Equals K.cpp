class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        int cnt=0,pre_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            pre_sum+=nums[i];
            if(pre_sum==k)
            cnt++;
            if(mp.find(pre_sum-k)!=mp.end())
            {
                cnt+=mp[pre_sum-k];
            }
            mp[pre_sum]++;
        }
        return cnt;
    }
};
