class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int j=0,maxlen=INT_MAX;
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            while(sum>=k)
            {
                maxlen=min(maxlen,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        return maxlen==INT_MAX? 0:maxlen;
    }
};
