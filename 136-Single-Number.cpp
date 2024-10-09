class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int xxor = 0;

        int len = nums.size();

        for(int i = 0 ; i < len ; i++){
            xxor ^= nums[i];
        }
        return xxor;
        
    }
};