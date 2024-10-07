class Solution {
public:
    bool check(vector<int>& nums) {
        int len = nums.size();
        int count_breaks = 0; // Count the number of order breaks

        for (int i = 0; i < len; i++) {
            if (nums[i] > nums[(i + 1) % len]) {
                count_breaks++;
            }
            if (count_breaks > 1) {
                return false; // More than one rotation point, so return false
            }
        }

        return true; // It has at most one break, so it can be a rotated sorted array
    }
};
