class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int len = piles.size();

        int sol  = 0;

        int max_element = piles[0];
        for(int i : piles){
            if(i > max_element) max_element = i;
        }

        int high = max_element;
        int low = 1 , mid ;
        // long long time;
    


        while( low <= high){
            long long time = 0;

            mid  = ( high + low)/2;
            

            // Calculate the total time needed with the current speed `mid`
            for (int i : piles) {
                time += (i + mid - 1) / mid;  // Equivalent to ceil(i / mid) without floating-point
                if (time > h) {  // Stop if time exceeds `h`
                    break;
                }
            }

            if(time <= h){
                high = mid - 1 ;
            }

            else low = mid + 1;
        }

        return low;
    }
};