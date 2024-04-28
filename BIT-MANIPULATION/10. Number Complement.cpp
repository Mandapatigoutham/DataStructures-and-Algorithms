class Solution {
public:
    int findComplement(int num) {
        int cnt=1;
        while((cnt&num)!=num)
        {
            cnt=cnt<<1;
            cnt++;
        }
        return cnt^num;
    }
};
