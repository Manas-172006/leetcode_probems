class Solution {
public:
    int fib(int n) {
        int current = 0 ; 
        int prev = 1 ;
        int prev2 = 0 ;

        for(int i = 2 ; i <= n ; i ++){
          current = prev +prev2;

            prev2=prev ;
            prev= current ;
        }
        return n==0 ? 0 :prev ;
        
    }
};