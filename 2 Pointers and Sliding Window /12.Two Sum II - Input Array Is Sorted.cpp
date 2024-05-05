class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size(),l=0,r=n-1,sum=0;
        vector<int>ans;
        while(l<=r)
        {
            sum=numbers[l]+numbers[r];
            if(sum==target)
            {
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
            else if(sum<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return ans;
    }
};
