class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int low = -1;
        int max = 0;

        nums.push_back(0);
        int len = nums.size();

        for(int i = 0 ; i < len ; i++){

            if(nums[i] == 0){
                if((i - low -1)  > max){
                    max = i-low -1 ;
                    low = i;
                }

                else low = i;
            }


        }

        return max;


    }
};