class Solution {
public:
    int minFlips(int a, int b, int c) {
        int cnt = 0;
        while(c || (a | b))
        {
            bool cBit = (c&1);
            bool aBit = (a&1);
            bool bBit = (b&1);
            if(cBit)
            {
                if(aBit || bBit)
                {
                    // Do Nothing
                }
                else
                {
                    cnt++;
                }
            }
            else
            {
                if(aBit)
                {
                    cnt++;
                }
                if(bBit)
                {
                    cnt++;
                }
            }
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        return cnt;
    }
};
