class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                cnt++;
                ans=cnt;
            }
            else
            {
                cnt=0;
            }
        }
        return ans;
    }
};
