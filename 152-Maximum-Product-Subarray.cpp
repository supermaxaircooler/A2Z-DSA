class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;

        // Initialize the maximum product, current maximum, and current minimum
        int maxProd = nums[0], currMax = nums[0], currMin = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            // If the current number is negative, swap currMax and currMin
            if (nums[i] < 0) {
                swap(currMax, currMin);
            }

            // Update currMax and currMin
            currMax = max(nums[i], currMax * nums[i]);
            currMin = min(nums[i], currMin * nums[i]);

            // Update the global maximum product
            maxProd = max(maxProd, currMax);
        }

        return maxProd;
    }
};
