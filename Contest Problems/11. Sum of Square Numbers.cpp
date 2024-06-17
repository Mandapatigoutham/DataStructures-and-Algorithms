class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0,r=sqrt(c);
        long long temp;
        while(l<=r)
        {
            temp=(l*l)+(r*r);
            if(temp==c)
            {
                return true;
            }
            else if(temp<c)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return false;
    }
};
