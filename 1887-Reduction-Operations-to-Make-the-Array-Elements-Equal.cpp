class Solution {
public:
    int reductionOperations(vector<int>& nums) {


        int arr[50001] = {};


        int mx = nums[0], mn = nums[0];

        for(int i : nums){
            arr[i]++;
            mx = max(mx , i);
            mn = min(mn , i);
        }

        int sol = 0;
        int aggregate = 0;

        for(int i = mx ; i > mn ; i--){
            if(!arr[i]) continue;

            sol += (aggregate + arr[i]);

            aggregate += arr[i];


        }

        return sol;
        
    }
};