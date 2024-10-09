class Solution {
public:
    int missingNumber(vector<int>& nums) {


        int len = nums.size();

        int sum = 0;

        auto it = nums.begin();
        auto itend = nums.end();

        while(it != itend){
            sum+= *it;
            it++;
        }

        int num = (pow(len , 2) + len)/2 - sum;
        return num;
        
    }
};