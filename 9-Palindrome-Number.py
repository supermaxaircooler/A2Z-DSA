class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        
        reversed_int = 0
        temp = x

        while (temp != 0 ):
            digit = temp%10
            temp = temp//10

            reversed_int = 10*reversed_int  + digit
        
        return reversed_int == x
        