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

    int findKthPositive(vector<int>& arr, int k) {
        
        int len  = arr.size();

        int temp = 0;

        while(k > 0){
            temp++;
            if(binarySearch(arr, 0 , len - 1, temp)   == -1){
                k--;
            }

        }


        return temp;


    }
};