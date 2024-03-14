class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0,sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(mp[sum-goal])
            ans+=mp[sum-goal];
            mp[sum]++;
        }
        return ans;
    }
};
