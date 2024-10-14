class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {


        int len = nums.size();

        int neg = 0;
        int pos = 0;

        vector<int> ans;
        
        bool needforpositive = true;

        while(neg < len || pos < len){

            if(needforpositive && pos == len) break;
            if(!needforpositive && neg == len) break;
        
    //
            if(needforpositive){
                if(nums[pos] >= 0){
                    ans.push_back(nums[pos]);
                    needforpositive = false;;
                    pos++;
                }
                else{
                    pos++;
                }
            }
            else{
                if(nums[neg] < 0){
                    ans.push_back(nums[neg]);
                    needforpositive = true;;
                    neg++;
                }
                else neg++;
            }
        }


        return ans;
        
    }
};