long long reversedBits(long long x) {
        // code here
        long long ans=0;
        string temp(32,'0');
        for(int i=31;i>=0;i--)
        {
            if(x%2)
            {
                temp[i]='1';
            }
            x=x/2;
        }
        reverse(temp.begin(),temp.end());
         int p=31;
        for(int i=0;i<32;i++)
        {
            if(temp[i]=='1')
            {
                ans+=pow(2,p);
            }
            p--;
        }
        return ans;
    }
