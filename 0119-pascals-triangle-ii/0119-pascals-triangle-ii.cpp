class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long   val = 1;
        vector<int > ans ; 
        ans.push_back(val);

        for(int col= 1 ; col<=rowIndex ; col++){
            val = val*(rowIndex-col+1);
            val=val/col;
            ans.push_back(val);
            
        }
        return ans;

    }
};