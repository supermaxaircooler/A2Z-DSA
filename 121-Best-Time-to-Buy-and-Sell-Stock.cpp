// went really hard on this. I may be dumb but I am proud

class Solution {
public:

    int solver(vector<int>& prices , int len, int start){



        if(start >= len-1) return 0;

        // int len = prices.size();



        int maxindex = start + 1; 
        // int miniindex = start;

        int mini = prices[start];
        int maxi = prices[start + 1];

        int temp = mini;
        // int tempindex = start; 

        for(int i = start+1 ; i < len ; i++){

            if(prices[i] >= maxi){

                maxi = prices[i];
                maxindex = i;
                mini = temp;
                // miniindex = tempindex;
            }

            if(prices[i] < temp){
                temp = prices[i];
                // tempindex = i;
            }

        }


        // if(maxi - mini < 0) return 0;
        

        int result =  max(maxi - mini , solver(prices , len , maxindex +1));

        if(result < 0) return 0;

        return result;

        // return max-min;


    }
    int maxProfit(vector<int>& prices) {

        int len = prices.size();

        if(len == 1) return 0;

        return solver(prices , len , 0);

        
    }
};
