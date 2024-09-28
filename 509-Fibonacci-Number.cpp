class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        int temp1 = 0;
        int temp2 = 1;

        for( int i = 0 ; i < n-1 ; i++){
            swap(temp1 , temp2);
            temp2 = temp1 + temp2;
        }
        return temp2;
    }
};

        
        // if n==0:
        //     return 0
        // temp1= 0
        // temp2 = 1


        // for i in range(n-1):
        //     temp2 , temp1 = temp1, temp2
        //     temp2 = temp1 + temp2


        // return temp2
        // # if n == 0:
        // #     return 0
        // # elif(n==1) : 
        // #     return 1
        

        // # return self.fib(n-1) + self.fib(n-2)
         
