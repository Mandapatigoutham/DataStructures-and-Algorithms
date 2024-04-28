class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here\
    vector
    vector<int>ans;
       sort(arr2,arr2+n);
       for(int i=0;i<m;i++)
       {
           int strt=0,end=n-1,cnt=0;
           while(strt<=end)
           {
               int mid=(strt+end)/2;
               if(arr2[mid]<=arr1[i])
               {
                   cnt=mid+1;
                   strt=mid+1;
               }
               else
               {
                   end=mid-1;
               }
           }
           ans.push_back(cnt);
       }
       return ans;
    }
};
