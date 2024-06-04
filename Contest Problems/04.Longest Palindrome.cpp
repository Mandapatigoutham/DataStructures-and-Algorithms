class Solution {
public:
    int longestPalindrome(string s) {
        int oddcnt=0;
        map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
            if(mp[it]%2==1)
            oddcnt++;
            else
            oddcnt--;
        }
        if(oddcnt>1)
        return s.size()-oddcnt+1;
        else
        return s.size();
    }
};
