class Solution {
public:
    void rotate(vector<int>& nums, int k) {


        int len = nums.size();
        if(len ==1 ) return ;
        k = k%len;

        vector<int> v;



        for(int i = len - k ; i < len ; i++){
            v.push_back(nums[i]);
        }

        for( int i = 0 ; i < len - k ; i ++){
            v.push_back(nums[i]);
        }

        v.swap(nums);

        // for(int i = 0 ;i < k ; i ++){
        //     int temp = nums[len - 1];
            

        //     for(int j = len-1 ; j > 0 ; j--){
        //         nums[j] = nums[j-1];                
        //     }

        //     nums[0] = temp;
        // }
        
    }
};