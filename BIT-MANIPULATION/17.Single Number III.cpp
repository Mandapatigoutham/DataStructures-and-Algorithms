class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        long x = 0;
        for(int i=0 ; i<n ; i++){
            x = x^nums[i];
        }
        int rightmost = (x&(x-1))^x;
        int b1 = 0;
        int b2 = 0;
        for(int i=0 ; i<n ; i++){
            if(rightmost&nums[i]){
                b1 = b1^nums[i];
            }else{
                b2 = b2^nums[i];
            }
        }
        return {b1,b2};
    }
};
