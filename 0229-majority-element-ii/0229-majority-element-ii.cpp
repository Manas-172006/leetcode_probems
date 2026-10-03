class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 =0 ; int c2= 0 ;
        int v1=INT_MIN ; int v2=INT_MIN;
        int n = nums.size();
        int mini= n/3 +1;
        vector<int> ans;

        for(int i = 0 ; i < n ; i++){
            if(c1==0 && v2!=nums[i]){
               c1++; 
               v1=nums[i];
            }else if(c2==0 && v1!=nums[i]){
                c2++;
                v2=nums[i];
            }else if(nums[i]==v1)c1++;
             else if(nums[i]==v2)c2++;
             else{
                c1--;
                c2--;
             }
        }

        int cun1=0;int cun2=0;
        for(int i = 0 ; i <n ; i++){
            if(v1==nums[i]){
                cun1++;
            }
            if(v2==nums[i]){
                cun2++;
            }
        }
        if(cun1>=mini){
            ans.push_back(v1);
        } 
        if(cun2>=mini){
            ans.push_back(v2);
        }
        
        sort(ans.begin() , ans.end());

        return ans;
    }
};