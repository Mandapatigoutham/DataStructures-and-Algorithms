bool isKthBitSet(int n, int k)
{
    // Write your code here.
    return (n&(1<<k-1))?1:0;
}
