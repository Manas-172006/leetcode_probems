class Solution {
public:
        int maxi(vector<int>& weights){
            int ans =0;
            for (int i = 0 ; i < weights.size() ; i++){
                ans=max(ans,weights[i]);

            }
            return ans ;

        }
        int summ(vector<int>& weights){
            int sum = 0 ;
            for(int i = 0 ; i <weights.size() ; i++){
                sum+=weights[i];
            }
            return sum ;
        }

        int nodays(vector<int>& weights , int mid){
            int load= 0 ; 
            int day=1;
            for(int i = 0 ; i < weights.size() ; i++){
                if(load+weights[i]<=mid){
                    load+=weights[i];
                }else{
                    day++;
                    load=weights[i];
                    
                }
            }
            return day;
        }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxi(weights);
        int high = summ(weights);

        while(low<=high){
            int mid= (low+high)/2;

            if(nodays(weights , mid)<=days){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low ; 

        
    }
};