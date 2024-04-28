bool isPowerOfTwo(int n)
{	
    // Write your code here.
    if(n&(n-1))
    return 0;
    else
    return 1;


}
