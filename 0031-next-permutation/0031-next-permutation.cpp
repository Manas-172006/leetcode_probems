class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //raverse to find the break point 
        //if there is no break point ( highest ) then reverse the array ( starting /smallest) -return the answer 
        //find the valur greater than the value at the breaking point and put the value just greater than the breaking point 
        //sort the values after the breaking point and return 

        int n = nums.size();
        int bp = -1;

        for(int i = n-1 ; i>0 ; i--){
            if(nums[i]>nums[i-1]){
                bp=i-1;
                break;
            }
        }
        if (bp==-1){
            reverse(nums.begin() , nums.end());
            return ;
        }
        
        for(int i = n-1 ; i>bp ; i--){
            if(nums[i]>nums[bp]){
                swap(nums[bp] , nums[i]);
                break;
            }
        }

        reverse(nums.begin()+bp+1 , nums.end());
        return ;
    }
};