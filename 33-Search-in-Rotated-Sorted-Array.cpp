class Solution {
public:


    int binarySearch(vector<int>& nums, int start , int end , int target){

        if(end < start){
            return -1;
        }

        int mid = (end + start)/2;
        if(target == nums[mid]) return mid;
        else if( target < nums[mid]){
            return binarySearch(nums , start , mid -1 , target);

        }
        return binarySearch(nums , mid + 1 , end , target);

    }


    int partition(vector<int> &nums, int start , int end){

        if(start == end) return start;

        int mid = (start + end )/2;

        if(nums[mid] < nums[end]) return partition(nums, start , mid);

        return partition(nums , mid+1 , end);
   


    }

    int search(vector<int>& nums, int target) {

        int len = nums.size();

        int index = partition(nums, 0 , len - 1);

        if(target <= nums[len - 1]) return binarySearch(nums, index, len -1 , target);
        return binarySearch(nums, 0 , index-1 , target);
        
    }
};