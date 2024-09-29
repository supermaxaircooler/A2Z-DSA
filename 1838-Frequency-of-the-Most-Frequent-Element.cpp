class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    if (nums.empty()) return 0;

    sort(nums.begin(), nums.end());

    long long total = 0; // To track the total sum of the current window
    int maxFreq = 1; // At least one element will always be there
    int left = 0;

    for (int right = 0; right < nums.size(); ++right) {
        total += nums[right];

        // Check if the current window is valid
        // The condition is that the sum of all elements in the current window
        // can be made equal to `nums[right]` with at most `k` increments.
        while ((long long)(right - left + 1) * nums[right] - total > k) {
            total -= nums[left]; // Remove the element at the left
            left++; // Shrink the window from the left
        }

        maxFreq = max(maxFreq, right - left + 1); // Update the max frequency
    }

    return maxFreq;
}

};