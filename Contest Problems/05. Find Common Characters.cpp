class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        for(char ch='a';ch<='z';ch++)
        {
            int mincnt=INT_MAX;
            for(string word:words)
            {
                int cnt=0;
                for(char letters:word)
                {
                    if(ch==letters)
                    cnt++;
                }
                mincnt=min(mincnt,cnt);
            }
            for(int i=0;i<mincnt;i++)
            {
                string temp;
                temp+=ch;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
