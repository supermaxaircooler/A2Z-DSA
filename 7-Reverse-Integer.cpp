#include <limits>

class Solution {
public:
    int reverse(int x) {
        const int MAX = numeric_limits<int>::max();  // 2147483647
        const int MIN = numeric_limits<int>::min();

        int reversed_int = 0;
        if (x == MIN) {
            return 0;  // Since the reverse of -2147483648 will overflow
        }

        if(x < 0 ){
            int digit = 0;
                            
            for(int temp = abs(x) ; temp != 0 ; temp = temp/10){

                digit = temp % 10;

                if (reversed_int >= MAX/10 && digit > 7) return 0;
                if (reversed_int > MAX/10) return 0;
                reversed_int = reversed_int *10 + digit;

                    
            }
                // if (reversed_int > MAX){ return 0;}
            return -1 * reversed_int;

            }

        else{
            int digit = 0;
                
            for(int temp = x ; temp != 0 ; temp = temp/10){

                digit = temp % 10;

                if (reversed_int >= MAX/10 && digit > 7) return 0;
                if (reversed_int > MAX/10) return 0;
                reversed_int = reversed_int *10 + digit;

                    
            }

            // if (reversed_int > MAX) {return 0;}
        return reversed_int;


        }
        
    }
};