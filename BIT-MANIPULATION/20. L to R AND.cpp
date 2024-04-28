class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        int cnt=0;
        while(l!=r)
        {
            l=l>>1;
            r=r>>1;
            cnt++;
        }
        return l<<cnt;
    }
};
