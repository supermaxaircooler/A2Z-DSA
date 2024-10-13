class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> spiral;

        int mini = min(n,m);

        int loopcount = mini/2;
        int temp1 = 0;
        int temp2 = 0;

        for(int k = 0 ; k< loopcount ; k++){

            temp1 = m-k-1;
            temp2 = n-k-1;

            for(int j= k ; j < temp1 ; j++){
                spiral.push_back(matrix[k][j]);
            }
            for(int i = k ; i < temp2 ; i++){
                spiral.push_back(matrix[i][temp1]);
            }
            for(int j = temp1 ; j > k ; j--){
                spiral.push_back(matrix[temp2][j]);
            }
            for(int i = temp2; i>k ; i--){
                spiral.push_back(matrix[i][k]);
            }
        }

        if(mini % 2 ==1){
            int range = 0;

            if(max(n,m) == m){
                range = m-n+1;
                for(int k = 0 ; k< range ; k++){
                    spiral.push_back(matrix[loopcount][loopcount +k]);
                }

            }
            else if(max(n,m) == n){
                range = n-m+1;
                for(int k = 0 ; k< range ; k++){
                    spiral.push_back(matrix[loopcount+k][loopcount]);
                }

            }

        }

        return spiral;

    }
};