vector<int> twoOddNum(vector<int> arr){
    // Write your code here.
    int n=arr.size();
    int xr=0;
    for(int i=0;i<n;i++)
    {
        xr^=arr[i];
    }
    int rightmost=(xr&~(xr-1));
    int x1=0,x2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]&rightmost)
        {
            x1^=arr[i];
        }
        else
        {
             x2^=arr[i];
        }
    }
    if(x1<x2)
    return {x2,x1};
    else
    return {x1,x2};
}
