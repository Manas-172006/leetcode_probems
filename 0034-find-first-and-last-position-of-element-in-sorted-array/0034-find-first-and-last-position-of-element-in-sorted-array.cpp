class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0 ; 
        int high= n-1;

        int first= -1;
        int last = -1;

        vector<int> ans;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }

        }

        if(first==-1){
            ans.push_back(first);
            ans.push_back(-1);
            return ans;

       }
       int low1 = 0 ; 
       int high1=n-1;

         while(low1<=high1){
            int mid = (low1+high1)/2;
            if(nums[mid]==target){
                last=mid;
                low1=mid+1;
            }else if(nums[mid]>target){
                high1=mid-1;
            }else{
                low1=mid+1;
            }

        } 
        ans.push_back(first);
        ans.push_back(last);
        return ans;
        
    }
};