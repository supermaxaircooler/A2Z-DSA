class Solution {
public:
    void sortColors(vector<int>& nums) {


        unordered_map <int,int> umap;

        for(int i: nums){
            umap[i]++;
        }

        nums.clear();



        for(int i = 0; i < 3 ; i++){
            for(int j = 0 ; j < umap[i] ; j++){
                nums.push_back(i);
            }
        }

    }
};

// 3 pointer approach

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();
//         int low=0,high=n-1,i=0;
//         while(i<=high){
//             if(nums[i]==0 && i>=low){
//                 swap(nums[i],nums[low++]);
//                 i--;
//             }else if(nums[i]==2){
//                 swap(nums[i],nums[high--]);
//                 i--;
//             }
//             i++;
//         }
//     }
// };