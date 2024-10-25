class Solution {
public:


  int upperbound(vector<int> &v , int start , int end , int target){
    
      if( end < start) {
          
          return -1;
      }  
      
      
      int mid = (start + end)/2;
      
      if(target == v[mid]){
        int c = upperbound(v , mid + 1, end, target);
        if(c < 0) return mid;
        else return c;
        
      } 
      
      else if( target < v[mid]) return upperbound(v , start , mid - 1, target);
      
      
      return upperbound(v , mid+1 , end , target);
  }

  int lowerbound(vector<int> &v , int start , int end , int target){
    
      if( end < start) {
          
          return -1;
      }  
      
      
      int mid = (start + end)/2;
      
      if(target == v[mid]){
        int c = lowerbound(v , start , mid - 1, target);
        if(c < 0) return mid;
        else return c;
        
      } 
      
      else if( target < v[mid]) return lowerbound(v , start , mid - 1, target);
      
      
      return lowerbound(v , mid+1 , end , target);
  }

    vector<int> searchRange(vector<int>& nums, int target) {

        int len = nums.size();

        return vector<int>{lowerbound(nums, 0 , len-1 , target), upperbound(nums, 0 , len - 1 , target)};
        
    }

};