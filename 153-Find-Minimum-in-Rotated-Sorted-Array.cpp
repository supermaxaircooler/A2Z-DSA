class Solution {
public:
    int partition(vector<int> &nums, int start , int end){

        if(start == end) return start;

        int mid = (start + end )/2;

        if(nums[mid] < nums[end]) return partition(nums, start , mid);

        return partition(nums , mid+1 , end);
   


    }


    int findMin(vector<int>& nums) {
        int len = nums.size();

        return nums[partition(nums, 0, len -1)];
        
    }
};