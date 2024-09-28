class Solution {
public:
    bool isPalindrome(string s) {

        bool palindrome = true;

        if (s == "") return true;

        int size = s.size();
        int left = 0;
        int right = size -1;
        while (left<= right){
            if(!isalnum(s[left])){
                left += 1;
                continue;
            }

            if(!isalnum(s[right])){
                right -= 1;
                continue;
            }

            if(tolower(s[left]) != tolower(s[right])){
                palindrome = false;
                break;
            }
            left += 1;
            right -= 1;

        }
        return palindrome;
        
    }
};

// class Solution:

//     def isPalindrome(self, s: str) -> bool:
        

//         Palindrome = True

//         if s == "": 
//             return True

//         size = len(s)
//         left = 0
//         right = size - 1

//         while left <= right:

//             if not s[left].isalnum():
//                 left += 1
//                 continue


//             if not s[right].isalnum():
//                 right -= 1
//                 continue


//             if s[left].lower() != s[right].lower(): 
//                 Palindrome = False
//                 break
            
//             left += 1
//             right -= 1