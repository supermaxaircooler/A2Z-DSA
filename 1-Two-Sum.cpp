class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Unordered map to store the value and its index
        unordered_map<int, int> umap;

        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (umap.find(complement) != umap.end()) {
                // If found, return the indices of the two numbers
                return {umap[complement], i};
            }

            // Otherwise, store the current number with its index
            umap[nums[i]] = i;
        }

        // If no solution found, return an empty vector
        return {};
    }
};
