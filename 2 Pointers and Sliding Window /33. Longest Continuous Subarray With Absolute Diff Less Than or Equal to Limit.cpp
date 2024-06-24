class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        map<int,int> mpp;
        int l = 0;
        int r = 0;
        int n = nums.size();
        int maxi = 0;
        while(r<n){
            mpp[nums[r]]++;

            int diff = abs(mpp.begin()->first - mpp.rbegin()->first);
            while(diff>limit){
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l++;
                diff = abs(mpp.begin()->first - mpp.rbegin()->first);
            }

            if(diff<= limit){
                maxi = max(maxi, r-l+1);
            }
            r++;
        }
        return maxi;
    }
};
