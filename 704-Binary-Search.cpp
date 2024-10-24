class Solution {
public:


    int binarySearch(vector<int>& nums, int start , int end , int target){

        if(end < start){
            return -1;
        }

        int mid = (end + start)/2;
        // int result;


        if(target == nums[mid]) return mid;



        else if( target < nums[mid]){
            return binarySearch(nums , start , mid -1 , target);

        }


        return binarySearch(nums , mid + 1 , end , target);






    }
    int search(vector<int>& nums, int target) {

        int len = nums.size();

        int sol = binarySearch(nums, 0 , len - 1 , target);


        return sol;
        
    }
};