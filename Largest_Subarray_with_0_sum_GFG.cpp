//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        
        
        
        
        unordered_map<int,int> umap;
        
        int len = arr.size();
         
        int maxLen = 0 ;
        
        int sum = 0;
        umap[0] = -1;
        
        
        for(int i = 0 ; i < len ; i++){
            
            
            sum += arr[i];
            
            
            // int temp = -1 * sum;
            
            if(umap.find(sum) != umap.end()){
                
                maxLen = max(maxLen , i-umap[sum]);
                
            }
            else{
                umap[sum] = i;
            }
            
            
        }
        return maxLen;
        // Your code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
