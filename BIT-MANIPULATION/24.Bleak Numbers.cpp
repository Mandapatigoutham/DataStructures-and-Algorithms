 int setbits(int n)
    {
        int cnt=0;
        while(n)
        {
            n=n&(n-1);
            cnt++;
        }
        return cnt;
    }
	int is_bleak(int n)
	{
	    // Code here.
	    for(int i=n-1;i>=n-ceil(log(n));i--)
	    {
	        int cnt=setbits(i);
	        if(i+cnt==n)
	        return 0;
	    }
	    return 1;
	}
