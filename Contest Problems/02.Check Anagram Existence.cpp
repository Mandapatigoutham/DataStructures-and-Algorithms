class Solution
{
    public:
    string doesExists(string s)
    {
        // code here   
        set<char>st;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }
        if(st.size()>1)
        return "YES";
        else
        return "NO";
    }
}
