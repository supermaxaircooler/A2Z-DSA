class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {


        bool row = false;  // boolean to indicate if there is a zero in first column of every row
        bool column = false; // boolean to indicate if there is a zero in first row 

        int n = matrix.size();  // no of rows
        int m = matrix[0].size(); // no of columns

        for(int i= 0 ; i < n ; i++){
            if(matrix[i][0]== 0) row = true;   // finding zeroes in 1st columb
        }

        for( int j = 0 ; j < m ; j++){
            if(matrix[0][j] == 0 ) column = true;  // finding zeroes in 1st row
        }

                    // the first row and the first columnn are used to store if that row or column contains a zero, if they do then the appropriate index are set to zero
                    // now searching the remaining matrix to find zeroes and setting the appropriate row and column to zero
        for(int i = 1 ; i < n ; i++){                
            for(int j = 1 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }        
            }
        }

            
        
        for(int i = 1 ; i < n ; i++){                 // the tally row and column will be resolved last to avoid discrepancy 
            if(matrix[i][0] == 0 ){                  // if [i,0] is set to zero then every element of that row is changed to zero
                for(int j = 1 ; j < m ; j++){
                    matrix[i][j]= 0;
                }
            }
            else{
                for(int j = 1 ; j < m ; j++){
                    if(matrix[0][j]== 0){             //changing the appropriate column to zero by accessing the tally column
                        matrix[i][j]= 0;
                    }
                }
            }
        }

        if(row == true){
            for(int i = 0 ; i < n ; i ++){                // resolving the tally row
                matrix[i][0] = 0;
            }
        }

        if(column == true){
            for(int j = 0 ; j < m ; j++){                // resolving the tally column
                matrix[0][j] = 0;
            }
        }


        
    }
};
