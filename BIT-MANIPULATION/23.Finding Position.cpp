long long int nthPosition(long long int n){
        // code here
        int m=1;
        while(n>1)
        {
            n=n/2;
            m=m*2;
        }
        return m;
    }
