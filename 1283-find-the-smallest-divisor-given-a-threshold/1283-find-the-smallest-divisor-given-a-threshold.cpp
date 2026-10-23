class Solution {
public:
    int maxi(vector<int>& nums){
        int n = nums.size();
        int ans = nums[0];
        for(int i = 1 ; i < n ; i ++){
            ans=max(ans,nums[i]);
        }
        return ans ;
    }
    int divsum(vector<int>& nums , int mid){
        int sum = 0 ;
        for(int i = 0 ; i <nums.size() ; i++){
            sum+=ceil((double)nums[i]/mid);
        }
        return sum ; 
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1 ; 
        int high =maxi(nums);

        while(low<=high){
            int mid = low+(high-low)/2;
            if(divsum(nums , mid)<=threshold){
              //  ans= mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
        
    }
};