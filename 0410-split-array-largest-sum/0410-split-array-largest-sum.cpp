class Solution {
public:
    bool possible(vector<int>& nums, int k, int mid) {
        int parts = 1, sum = 0;

        for (int num : nums) {
            if (sum + num <= mid) {
                sum += num;
            } else {
                parts++;
                sum = num;
            }
        }

        return parts <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};