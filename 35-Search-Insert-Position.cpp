class Solution {
public:
  int upperbound(vector<int> &v , int start , int end , int target){
      
    //   if( start == end){
    //       if( target > v[start])
    //   }
      
      if( end < start) {
          
          return start;
        //   return -1;
      }  
      
      
      int mid = (start + end)/2;
      
      if(target == v[mid]) return mid;
      
      else if( target < v[mid]) return upperbound(v , start , mid - 1, target);
      
      
      return upperbound(v , mid+1 , end , target);
  }


    int searchInsert(vector<int>& nums, int target) {

        int len = nums.size();

        


        return upperbound(nums, 0 , len - 1, target);
        
    }
};