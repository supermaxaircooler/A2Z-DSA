class Solution:
    def reverse(self, x: int) -> int:

        temp = x

        reversed_no = 0

        if temp<0:
            temp = abs(temp)
            
            while(temp != 0):

                digit = temp%10
                reversed_no = reversed_no* 10 + digit
                temp = temp//10

            if reversed_no > 2147483648:
                return 0
            else : return -reversed_no
        

        else:
            while(temp != 0):

                digit = temp%10
                reversed_no = reversed_no* 10 + digit
                temp = temp//10


        if reversed_no > 2147483648:      
            return 0  
        else : return reversed_no


                