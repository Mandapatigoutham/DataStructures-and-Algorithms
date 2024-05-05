class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,ans=0;
        for(int i=0;i<k;i++)
        {
            lsum+=cardPoints[i];
        }
        ans=max(ans,lsum);
        int j=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[j];
            j--;
            ans=max(ans,lsum+rsum);
        }
        return ans;
    }
};
