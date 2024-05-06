class Solution {
  public:
    int countBits(int n) {
        // code here
        vector<int> res(n + 1, 0);
        for (int x = 1; x <= n; x++)
            res[x] = res[x / 2] + (x % 2);
       int ans=0;
       for(int i=0;i<res.size();i++)
       {
           ans+=res[i];
       }
       return ans;
    }
};
