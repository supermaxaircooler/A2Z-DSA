class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

            vector<vector<int>> vec(n , vector<int>(n,0));
    
    
    
            int count = 1;
            
            int no_of_spirals = n/2;
            
            for(int i = 0 ; i < no_of_spirals ; i++ ){
                
                for( int k = i ; k < n-i-1 ; k++ ){
                    vec[i][k] = count;
                    count++;
                }
                
                for( int j = i ; j < n - i - 1 ; j++){
                    vec[j][n-i-1] = count;
                    count++;
                }
                
                for(int k = n-i-1 ; k > i ; k--){
                    vec[n-i-1][k] = count;
                    count++;
                }
                
                for(int j = n-i-1 ; j > i ; j--){
                    vec[j][i] = count;
                    count++;
                }
            }

            if(n%2 ==1){
                vec[n/2][n/2] = count;
            }
            return vec;
            
            
    
        
    }
};