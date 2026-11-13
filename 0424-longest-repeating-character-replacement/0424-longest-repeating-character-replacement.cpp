class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfrequency = 0 ; 
        int maxlen = 0 ; 
        int l = 0 ; 
        int r = 0 ;
        unordered_map<char , int > mpp;
        int n = s.size();

        while(r<n){
            mpp[s[r]-'A']++;
            maxfrequency=max(maxfrequency , mpp[s[r]-'A']);
            if(r-l+1-maxfrequency>k){
                mpp[s[l]-'A']--;
                maxfrequency=0;
                l++;
            }
            if(r-l+1 - maxfrequency<=k){
                maxlen=max(maxlen , r-l+1);
            }
            r++;

        }
        return maxlen ;
    }
};