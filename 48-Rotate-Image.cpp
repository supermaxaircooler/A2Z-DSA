class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // Transpose the matrix, then reverse the order of the columns

        int n = matrix.size();
        int m = matrix[0].size();

        for( int i = 0 ; i < n ; i++){

            for(int j = 0 ; j < i ; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        int low;
        int high ;

        for(int i = 0 ; i < n ; i++){
            low = 0;
            high = m-1;
            while(low < high){
                swap(matrix[i][low] , matrix[i][high]);
                low++;
                high--;
            }
        }


        
    }
};
