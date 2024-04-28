class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.\d=d%16;
             d=d%16;
            return {((n << d) | n >> (16 - d)) & 0xFFFF,((n >> d) | n << (16 - d)) & 0xFFFF};
        }
};
