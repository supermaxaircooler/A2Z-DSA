class Solution:
    def isPalindrome(self, s: str) -> bool:


        if(s == 0): return True

        temp = ''.join(ch for ch in s if ch.isalnum()).lower()


        temp2 = temp[::-1]
        


        return temp == temp2


        