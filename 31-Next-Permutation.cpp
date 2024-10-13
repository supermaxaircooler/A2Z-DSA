class Solution {
public:

    int binarysearch(vector<int>& nums , int start , int end , int target){
        
        if(end <= start && target < nums[start]) return start ;
        if(end <= start && target >= nums[start]) return start+1 ;
        int middle = start + (end - start)/2;
        
        int output;
        
        if(target >= nums[middle] ){
            output  = binarysearch(nums, middle + 1 , end , target);
        }
        
        else{
            output = binarysearch(nums, start, middle-1 , target);
            
        }
        return output;
    }

    void nextPermutation(vector<int>& nums) {

        int len = nums.size();

        if(len == 1) return;
        if(len ==2){
            swap(nums[0], nums[1]);
            return;
        }


        if(nums[len-1] > nums[len-2]){
            swap(nums[len-1], nums[len-2]);
        }
        else{
            int k = len-1;
            bool complete = false;

            while(nums[k-1] >= nums[k] ){
                k--;
                if(k ==0){
                    complete = true;

                    break;

                } 
            }
            reverse(nums.begin()+k , nums.end());
            if(!complete){
                int index = binarysearch(nums, k, len-1 , nums[k-1]);
                swap(nums[index], nums[k-1]);
            }
        }
        
    }
};