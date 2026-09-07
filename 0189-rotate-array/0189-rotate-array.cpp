class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int r= k%n;
        vector<int> tmp;

        for(int i = n-r ; i < n ; i ++){
            tmp.push_back(nums[i]);

        }

        for(int i =n-r-1 ; i>=0 ; i--){
            nums[r+i]=nums[i];
        }

        for(int i = 0 ; i <tmp.size() ; i++){
            nums[i]=tmp[i];
        }
    }
};