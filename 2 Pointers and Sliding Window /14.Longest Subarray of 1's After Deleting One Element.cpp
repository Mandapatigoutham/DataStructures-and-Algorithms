class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,ans=0,cnt=0,k=1;
        while(r<n)
        {
            if(nums[r]==0)
            cnt++;
            if(cnt<=k)
            ans=max(ans,r-l);
            else
            {
                while(nums[l]!=0)
                {
                    l++;
                }
                l++;
                cnt--;
            }
            r++;
        }
        return ans;
    }
};
