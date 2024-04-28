class Solution {
  public:
    string binToGrey(string b) {
        // code herest
        string ans="";
        ans+=b[0];
        for(int i=0;i<b.size()-1;i++)
        {
            int xr=(b[i]-'0')^(b[i+1]-'0');
            ans+=to_string(xr);
        }
        return ans;
    }
    
    string greyToBin(string g) {
        // code here
        string ans="";
        ans+=g[0];
        int prev=g[0]-'0';
        for(int i=1;i<g.size();i++)
        {
            int xr=(g[i]-'0')^(prev);
            ans+=to_string(xr);
            prev=xr;
        }
        return ans;
    }
};
