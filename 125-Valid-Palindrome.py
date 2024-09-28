class Solution:

    def isPalindrome(self, s: str) -> bool:
        
        # Assume it's a palindrome until proven otherwise
        Palindrome = True

        if s == "":  # Check if the string is empty
            return True

        size = len(s)
        left = 0
        right = size - 1

        while left <= right:
            # Move left index to the next alphanumeric character
            if not s[left].isalnum():
                left += 1
                continue

            # Move right index to the previous alphanumeric character
            if not s[right].isalnum():
                right -= 1
                continue

            # Compare the characters at the left and right
            if s[left].lower() != s[right].lower():  # Case-insensitive comparison
                Palindrome = False
                break
            
            left += 1
            right -= 1

        return Palindrome
