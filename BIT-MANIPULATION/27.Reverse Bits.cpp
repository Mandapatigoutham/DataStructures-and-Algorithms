class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        int p=31;
        while(n)
        {
            if(n&1)
            ans+=pow(2,p);
            p--;
            n=n>>1;
        }
        return ans;
    }
};
