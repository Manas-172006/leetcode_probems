class Solution {
public:
    int maxi(vector<int>& bloomDay){
        int n = bloomDay.size();
        int ans= bloomDay[0] ; 
        for(int i = 1 ; i < n ; i ++){
             ans= max(ans ,bloomDay[i] );
        }
        return ans ;
    }
    int mini(vector<int>& bloomDay){
        int n = bloomDay.size();
        int ans= bloomDay[0] ; 
        for(int i = 1 ; i < n ; i ++){
             ans= min(ans ,bloomDay[i] );
        }
        return ans ;
    }

    bool possible(vector<int>& bloomDay , int day , int m , int k ){
        int n = bloomDay.size();
        int c =0 ; 
        int  no = 0 ; 
        for(int i = 0 ; i < n ; i ++){
            if(bloomDay[i]<=day){
                c++;

            }else{
                no+=(c/k);
                c=0;
            }

        }
         no+=(c/k);
        if(no>=m){
            return true;
        }else{
            return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(1LL*m*k>n){
            return -1;
        }
        int low = mini(bloomDay);
        int high = maxi(bloomDay);

        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay , mid , m , k )==true){
                high=mid-1;
            }else{
                low=mid+1;
            }

        }
        return low ;
        
    }
};