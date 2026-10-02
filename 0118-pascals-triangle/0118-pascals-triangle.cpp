class Solution {
public:
    vector<int> genrow(int r){
      long long val = 1;  
      vector<int > ans;
      ans.push_back(val);
      for(int col = 1 ; col<r ; col++){
        val=val*(r-col);
        val=val/col;
        ans.push_back(val);
      }
      return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i = 0 ; i <numRows ;i++){
            ans.push_back(genrow(i+1));
        }
        return ans;
    }
};