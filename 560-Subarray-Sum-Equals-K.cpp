class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int len = nums.size();

        unordered_map <int , int> umap;
        int sum = 0;
        int count = 0;
        umap[0] = 1;

        for(int i = 0; i < len ; i++){



            sum+=nums[i];
            // umap[sum]++;

            if(umap.find(sum - k) != umap.end()){
                count += umap[sum -k];
            }
            // if(sum == k ) count++;
            umap[sum]++;

        }

        // auto it = umap.begin();
        // int temp;
        // bool present = false;

        // for(auto it = umap.begin() ; it != umap.end() ; it++){

        //     temp =  k - it->first;

        //     if(umap.find(temp) != umap.end() && umap.find(temp) != it)
        //     {
        //         present = true;
        //         count += umap[temp]*(it->second);

        //     }


        // }

        return count;
        
    }
};