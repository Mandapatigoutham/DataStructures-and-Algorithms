int findPosition(int N) {
        // code here
        int cnt=0,pos=0,i=0;
        while(N)
        {
            i++;
            if(N%2!=0)
            {
                cnt++;
                pos=i;
            }
            N=N/2;
        }
        if(cnt>1 || cnt==0)
        return -1;
        else
        return pos;
    }
