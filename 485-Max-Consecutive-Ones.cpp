class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        nums.push_back(0);
        int len = nums.size();
        vector<int> v;

        int max = 0;

        for(int i = 0 ; i < len ; i++){


            if(nums[i] == 1){
                max+= 1;
            }
            else{
                v.push_back(max);
                max = 0;
            }
        }

        int high = 0;

        for(auto it : v){
            if(it > high) high = it;
        }
        return high;
        
    }
};