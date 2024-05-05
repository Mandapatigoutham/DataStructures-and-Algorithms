class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),l=0,r=0,ans=0,cnt=0;
        while(r<n)
        {
            if(nums[r]==0)
            cnt++;
            if(cnt<=k)
            ans=max(ans,r-l+1);
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
