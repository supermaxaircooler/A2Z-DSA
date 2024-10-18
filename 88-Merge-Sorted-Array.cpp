class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(m ==0){
            swap(nums1, nums2);
            return;

        }
        if(n == 0){
            return;
        }


        int backpointer1 = m-1;
        int backpointer2 = n-1;


        int progressindex = m+n-1;

        while(backpointer1 >= 0 && backpointer2 >= 0){

            if(nums1[backpointer1] > nums2[backpointer2]){
                nums1[progressindex] = nums1[backpointer1];
                backpointer1--;
                progressindex--;
            }


            else if(nums1[backpointer1] <= nums2[backpointer2]){
                nums1[progressindex] = nums2[backpointer2];
                backpointer2--;
                progressindex--;
            }

        }

        if(backpointer1 < 0){
            while(progressindex >= 0){
                nums1[progressindex] = nums2[backpointer2];
                progressindex--;
                backpointer2--;
            }
        }

        return;




        
    }
};