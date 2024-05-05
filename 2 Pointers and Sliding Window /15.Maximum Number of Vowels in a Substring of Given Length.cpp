class Solution {
public:
    bool vowel(char a){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
        else return 0;
    }
    int maxVowels(string s, int k) {
        int maxi = 0;
        int count = 0;
        int i = 0;
        int n = s.size();
        for(int j = 0; j<n; j++){
            if(vowel(s[j])) count++;
            if(j-i+1 == k){
                maxi = max(maxi, count);
                if(vowel(s[i])) count--;
                i++;
            } 
        }
        return maxi;
    }
};
