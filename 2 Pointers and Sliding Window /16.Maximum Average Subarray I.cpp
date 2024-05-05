class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size(),i=0;
        double sum=0,ans=INT_MIN;
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            if((j-i+1)==k)
            {
                double val=sum/k;
                ans=max(ans,val);
                sum-=nums[i];
                i++;
            }
        }
        return ans;
    }
};
