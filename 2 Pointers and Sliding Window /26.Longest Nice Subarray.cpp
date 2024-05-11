class Solution {
public:
     //If 3 & 8 == 0, implies 3+8 = 3^8=11
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,ans=0;
        int lsum=0,lxor=0;
        while(r<n)
        {
            lsum+=nums[r];
            lxor^=nums[r];
            while(lsum!=lxor)
            {
                lsum-=nums[l];
                lxor^=nums[l];
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
