vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
    int i = 0;
    int j = 0;
    int maxi = INT_MIN;
    while (j < n)
    {
        if (arr[j] > maxi)
        {
            maxi = arr[j];
        }
        if (j - i + 1 == k)
        {
            ans.push_back(maxi);
            if (arr[i] == maxi)
            {
                maxi = INT_MIN;
                j = i;
            }
            i++;
        }
        if (j - i + 1 != k)
        {
            j++;
        }
    }
    return ans;
    }
