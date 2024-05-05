class Solution {
public:
     int fun(vector<int>& nums, int k)
     {
        if(k<0)
        return 0;
        int l=0,r=0,ans=0;
        map<int,int>mp;
        while(r<nums.size())
        {
            mp[nums[r]]++;
                while(mp.size()>k)
                {
                    mp[nums[l]]--;
                    if(mp[nums[l]]==0)
                    mp.erase(nums[l]);
                    l++;
                }
            ans+=r-l+1;
            r++;
        }
        return ans;
     }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return fun(nums,k)-fun(nums,k-1);
    }
};
