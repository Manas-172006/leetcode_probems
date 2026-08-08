class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur_cnt= 0 ; 
        int max_cnt= 0 ; 

        for(int i = 0 ; i < nums.size(); i ++){
            if(nums[i]==1){
                cur_cnt+=1;
            }else{

                cur_cnt=0 ; 

            }
             max_cnt= max(cur_cnt,max_cnt);

        }
        return max_cnt;
        
    }
};