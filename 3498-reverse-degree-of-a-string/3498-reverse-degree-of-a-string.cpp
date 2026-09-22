class Solution {
public:
    int reverseDegree(string s) {
        int ans= 0 ;
        map<char , int> deg;
        for(char ch = 'a' ; ch<='z' ; ch++){
            deg[ch]='z' - ch+1;
        }
        for(int i =0 ; i <s.size() ; i++){
            ans+= deg[s[i]]*(i+1);

        }
        return ans;



        
    }
};