string getBinaryRep(int N)
    {
        // Write Your Code here
        string ans(30,'0');
        for(int i=0;i<30;i++)
        {
            if(N%2==1)
            {
                ans[i]='1';
            }
            N=N/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
