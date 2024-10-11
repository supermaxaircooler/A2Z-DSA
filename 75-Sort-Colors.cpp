class Solution {
public:
    void sortColors(vector<int>& nums) {


        unordered_map <int,int> umap;

        for(int i: nums){
            umap[i]++;
        }

        vector<int> v;

        for(int i = 0; i < 3 ; i++){
            for(int j = 0 ; j < umap[i] ; j++){
                v.push_back(i);
            }
        }

        v.swap(nums);


        
    }
};