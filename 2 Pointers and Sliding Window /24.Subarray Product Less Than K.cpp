class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0 || k==1)
        return 0;
        int ans=0,l=0,r=0,sum=1;
        while(r<n)
        {
            sum*=nums[r];
            while(sum>=k)
            {
                sum=sum/nums[l];
                l++;
            }
            ans+=r-l+1;
            r++;
        }
        return ans;
    }
};
