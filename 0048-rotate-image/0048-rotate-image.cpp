class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //size same row and col as it is a squar matrix
        int n = matrix.size();
        
        //transpose (this is to convert the row into coloumn)
        for(int i = 0 ; i < n ; i ++){
            for(int j = i+1 ; j <n ; j++){
                if (i==j){
                    continue;
                }else{
                    swap(matrix[i][j] , matrix[j][i]);
                }
            }
        }

        //reverse to get it to 90 degree angle( currently would be in oppo )
        for(int i = 0 ; i < n ; i ++){
            reverse(matrix[i].begin() , matrix[i].end());
        }
        return ;

    }
};