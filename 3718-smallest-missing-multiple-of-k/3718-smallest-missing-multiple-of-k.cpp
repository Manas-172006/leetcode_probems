class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int cnt = 1;

        while (true) {
            int target = cnt * k;
            bool found = false;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == target) {
                    found = true;
                    break;
                }
            }

            if (found == false) {
                return target;
            }

            cnt++;
        }
    }
};