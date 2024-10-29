class Solution {
public:
    int kthElement(int k, vector<int>& a, vector<int>& b) {
            
    int m = a.size();
    int n = b.size();
    if (m > n) return kthElement(k , b , a);

    int left = k; //length of left half

    //apply binary search:
    int low = max(0, k - n), high = min(k, m);
    while (low <= high) {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        //calculate l1, l2, r1 and r2;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < m) r1 = a[mid1];
        if (mid2 < n) r2 = b[mid2];
        if (mid1 - 1 >= 0) l1 = a[mid1 - 1];
        if (mid2 - 1 >= 0) l2 = b[mid2 - 1];

        if (l1 <= r2 && l2 <= r1) {
            return max(l1, l2);
        }

        //eliminate the halves:
        else if (l1 > r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
    return 0; //dummy statement

}




    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();


        if((m+n)%2 ==1) return (double)kthElement((m+n)/2+1 , nums1 , nums2);

        return (double)(kthElement((m+n)/2 , nums1 , nums2) + kthElement((m+n)/2+1 , nums1 , nums2))/2;
        
    }




};