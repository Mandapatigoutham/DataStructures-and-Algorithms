class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        //code here.
    vector<int> ans;
    int i = 0;
    int j = 0;
    unordered_map<int,int>mp;
    while (j < n)
    {
        mp[arr[j]]++;
        if (j - i + 1 == k)
        {
            ans.push_back(mp.size());
            if(mp.find(arr[i])!=mp.end())
            {
                mp[arr[i]]--;
                if(mp[arr[i]]==0)
                mp.erase(arr[i]);
            }
            i++;
        }
        j++;
    }
    return ans;
    }
};
