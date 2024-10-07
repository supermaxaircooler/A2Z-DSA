class Solution {
public:
    bool check(vector<int>& nums) {

        int len = size(nums);

        int start = 0;
        int last = len-1;
        // bool startchange = true;
        // bool endchange = true;

        while(start < len-1){
            if(nums[start +1] >= nums[start]){
                start++;        
            }
            else break;
        }

        while(last > 0){
            if(nums[last] >= nums[last-1]) last--;
            else break;

        }

        // while(start!= last && (startchange || endchange)){
        //     if(nums[start +1] >= nums[start]){
        //         start++;        
        //     }
        //     else !startchange;
        //     if(nums[last] >= nums[last-1]) last--;
        //     else !endchange;

        // }
        if(start == len - 1 && last == 0) return true;
        if(start+1 == last && nums[0]>= nums[len-1]) return true;
        else return false;


    }
};