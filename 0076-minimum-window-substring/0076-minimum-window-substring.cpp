class Solution {
public:
    string minWindow(string s, string t) {
        int minlen=INT_MAX;
        int stindex= -1 ; 
        int cnt = 0 ; 
        int r = 0 ; 
        int l = 0 ; 
        int n = s .size();
        int p= t.size();
        unordered_map<char , int> hash;

        for(int i = 0 ; i <p ; i++){
            hash[t[i]]++;
        }

        while(r<n){
            if(hash[s[r]]>0){
                cnt++;
            }
              hash[s[r]]--;


            while(cnt==p){
                // minlen = min(minlen , r-l+1);
                if(r-l+1 < minlen){
                    minlen=r-l+1;
                    stindex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    cnt--;

                }
                l++;
            }
                r++;

        }
      return stindex == -1 ? "" : s.substr(stindex, minlen);
        
    }
};