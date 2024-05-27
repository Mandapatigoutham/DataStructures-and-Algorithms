class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int pref=1;
        int postf=1;
        
        for(int i=0;i<nums.size();i++){
            pref*=nums[i];
            postf*=nums[nums.size()-i-1];
            ans=max(ans,max(pref,postf));
            if(pref==0){
                pref=1;
            }
            if(postf==0){
                postf=1;
            }
        }
        return ans;
    }
};
