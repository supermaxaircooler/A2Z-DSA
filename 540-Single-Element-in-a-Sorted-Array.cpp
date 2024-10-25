class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int xxor=0;

        for(int i : nums){
            xxor ^= i;
        }

        return xxor;


        // int len = high - low +1;


        // int mid = (low + high)/2;


        // if(mid)
        
    }
};