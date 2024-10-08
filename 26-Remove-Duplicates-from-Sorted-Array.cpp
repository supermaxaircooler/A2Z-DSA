class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


        int len = nums.size();

        if(len ==1 ) return 1;
        nums.push_back(101);

        int pointer1 = 0;
        int pointer2 = 0;

        while(pointer2 < len){

            if(nums[pointer2] != nums[pointer2 +1]){
                nums[pointer1] = nums[pointer2];
                pointer1++;
                pointer2++;
            }
            else pointer2++;
        }

        return pointer1 ;
        
    }
};