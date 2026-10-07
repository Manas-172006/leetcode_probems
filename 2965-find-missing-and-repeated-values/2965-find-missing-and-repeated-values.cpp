class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        // int m=grid[0].size();
        vector<int> hash(n*n+1 , 0);

        int reapting=0;
        int missing= 0 ; 

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                hash[grid[i][j]]++;
            }
        }
        for(int i = 1 ; i <=n*n;i++){
            if(hash[i]==2){
                reapting =i;
            }
            if(hash[i]==0){
                missing = i ; 
            }
        }
        return {reapting , missing };
    }
};