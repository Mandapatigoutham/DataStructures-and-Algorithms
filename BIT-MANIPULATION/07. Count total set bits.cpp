int countSetBits(int N)
{
    //Write your code here
      if(N==1) return 1;
    int cnt=countSetBits(N-1);
    while(N)
    {
        N=N&(N-1);
        cnt++;
    }
    return cnt;
}
