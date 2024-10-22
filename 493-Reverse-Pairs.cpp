class Solution {
public:

// Merge two subarrays: arr[low..mid] and arr[mid+1..high]
void merge(vector<int>& arr, int low, int mid, int high , int& count) {
    int n1 = mid - low + 1;  // Size of the left subarray
    int n2 = high - mid;     // Size of the right subarray
    
    // Create temporary arrays
    vector<int> left(n1);
    vector<int> right(n2);
    
    // Copy data to temporary arrays left[] and right[]
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];
    
    // Merge the two subarrays back into arr[low..high]
    int i = 0, j = 0, k = low;
    int first = 0;
    int second = 0; 

    while(first < n1 && second < n2){
        if(left[first] > 2* (long)right[second]){             // comparing the copied arrays first for nums[i] > 2* nums[j] , then proceeding with the merge sort

            count = count + n1 - first;
            // first++;
            second++;

        }
        else first++;


    }
    
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    
    // Copy any remaining elements of left[], if there are any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    
    // Copy any remaining elements of right[], if there are any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Recursive merge sort function
void mergeSort(vector<int>& arr, int low, int high , int& count) {
    if (low < high) {
        // Find the middle point
        int mid = low + (high - low) / 2;
        
        // Recursively sort the first and second halves
        mergeSort(arr, low, mid, count );
        mergeSort(arr, mid + 1, high , count);
        
        // Merge the sorted halves
        merge(arr, low, mid, high , count);
    }
}
    int reversePairs(vector<int>& nums) {

        int len = nums.size();

        int count = 0;

        mergeSort(nums, 0 , len-1 , count);

        return count;
        
    }
};



// Merge two subarrays: arr[low..mid] and arr[mid+1..high]
