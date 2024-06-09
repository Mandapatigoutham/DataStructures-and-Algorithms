class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int count = 0, l = 0;
        for (int r = 1; r < skills.size(); r++){
            if (skills[l] > skills[r])
                count++;
            else{
                count = 1;
                l = r;
            }
            if (count == k) return l;
        }
        return l;
    }
};
