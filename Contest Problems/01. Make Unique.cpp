int minimumOperations(int n, vector<int> &v) {
    // Write your code here.
    vector<int>freq(n+1);
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        freq[v[i]]++;
        maxi=max(maxi,freq[v[i]]);
    }
    int ans=0;
    while(maxi>1)
    {
        ans++;
        maxi=(maxi+1)/2;
    }
    return ans;
}
