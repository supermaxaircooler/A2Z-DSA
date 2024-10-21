int solve(vector<int> &nums, int B) {
    unordered_map<int, int> umap; // To store frequency of prefix XORs
    int count = 0;
    int currXor = 0;

    // Initialize to handle the case when prefixXor itself equals B
    umap[0] = 1;

    for (int i = 0; i < nums.size(); i++) {
        currXor ^= nums[i];

        // Check if currXor ^ B exists in the map
        int temp = currXor ^ B;

        // If it exists, it means we found a subarray whose XOR is B
        if (umap.find(temp) != umap.end()) {
            count += umap[temp];
        }

        // Store the current prefix XOR in the map
        umap[currXor]++;
    }

    return count;
}
