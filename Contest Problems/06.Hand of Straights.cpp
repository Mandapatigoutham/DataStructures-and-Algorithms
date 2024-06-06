class Solution {
public:
    bool isNStraightHand(vector<int>& arr, int gs) {
        if(arr.size()%gs!=0)
        {
            return false;
        }
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        while(mp.size())
        {
            int ele=mp.begin()->first;
            for(int i=0;i<gs;i++)
            {
                if(mp[ele+i]>0)
                {
                    mp[ele+i]--;
                    if(mp[ele+i]==0)
                    {
                        mp.erase(ele+i);
                    }
                }
                else
                return 0;
            }
        }
        return 1;
    }
};











