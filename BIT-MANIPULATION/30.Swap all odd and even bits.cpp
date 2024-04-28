class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	  int  num=((n & 0x55555555)<<1 | (n & 0xAAAAAAAA)>>1) ;
       return num;// Your code
    }
};
