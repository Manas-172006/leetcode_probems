class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        //size(n)= nums[i]/n==0
        //if 0 then nums[i]*nums[i]
        //return sum of squar value 
        int n = nums.size();
        int sum = 0 ;
        for(int i = 0 ; i <n;i++){
            if(n%(i+1)==0){
                sum+=nums[i]*nums[i];
            }
        }
        return sum ;
    }
};