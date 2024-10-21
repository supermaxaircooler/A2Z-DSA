class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int len = nums.size();

        int maxP = nums[0];

        int sol = 1;


        for(int i = 0 ; i < len ; i++){
            if(nums[i] == 0){
                sol = 1;
                continue;
            }

            sol *= nums[i];


            maxP = max(sol , maxP );

        }

        sol = 1;
        for( int j = len -1 ; j > -1 ; j--){

            if(nums[j] == 0){
                if(maxP < 0) maxP = 0;
                sol = 1;
                continue;
            }

            sol *= nums[j];


            maxP = max(sol , maxP );

        }

        return maxP;


        
    }
};