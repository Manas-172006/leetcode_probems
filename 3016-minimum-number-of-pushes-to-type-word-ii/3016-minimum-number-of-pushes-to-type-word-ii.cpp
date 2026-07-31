class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(char ch :word){
            freq[ch-'a']++;
        }

        sort(freq.begin(),freq.end(),greater<int>());
        int min_count=0;

        for(int i = 0 ; i <26 ; i ++ ){
            if(i<8){
                min_count+=freq[i];
            }
            else if(i<16){
                min_count+=freq[i]*2;
            }
            else if(i<24){
                min_count+=freq[i]*3;
            }else{
                min_count+=freq[i]*4;
            }
        }
        return min_count;
        
    }
};