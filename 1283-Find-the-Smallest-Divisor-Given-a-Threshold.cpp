class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {


        int maximum = nums[0];

        for(int i : nums){
            if( i > maximum) maximum = i;
        }


        int low = 1, high = maximum;


        while( low <= high){

            int mid = (high+low)/2;

            long long summ = 0;


            for(int element: nums){

                summ += (element+mid-1)/mid;

                if(summ > threshold) break;
            }

            if(summ > threshold){

                low = mid +1;

            }

            else{
                
                high = mid -1;
            }



        }
        return low;



        
    }
};