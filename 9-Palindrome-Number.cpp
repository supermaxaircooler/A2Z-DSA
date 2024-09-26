#include<limits>

class Solution {
public:
    bool isPalindrome(int x) {

        const int MAX = numeric_limits<int>::max();  // 2147483647
        const int MIN = numeric_limits<int>::min();
        int digit = 0;
        if (x < 0) return false;

        int reversed_int = 0;

        for (int temp = x ; temp != 0  ; temp = temp/10){
            digit = temp%10;
            if (reversed_int > MAX/10 || (reversed_int >= MAX/10 && digit > 7)) return 0;

            reversed_int = 10*reversed_int + digit;
        }

        return reversed_int == x;
        
    }
};

// class Solution:
//     def isPalindrome(self, x: int) -> bool:
//         if x < 0:
//             return False
        
//         reversed_int = 0
//         temp = x

//         while (temp != 0 ):
//             digit = temp%10
//             temp = temp//10

//             reversed_int = 10*reversed_int  + digit
        
//         return reversed_int == x
        