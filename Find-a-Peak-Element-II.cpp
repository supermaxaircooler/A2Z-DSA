class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        // Start at roughly the center
        int i = m / 2;
        int j = n / 2;

        // Direction vectors: up, down, left, right
        const int di[4] = {-1, 1, 0, 0};
        const int dj[4] = {0, 0, -1, 1};

        while (true) {
            int best_i = i, best_j = j;
            int best_val = mat[i][j];

            // Check all four neighbors
            for (int d = 0; d < 4; ++d) {
                int ni = i + di[d];
                int nj = j + dj[d];

                // If neighbor is in-bounds and strictly greater
                if (ni >= 0 && ni < m && nj >= 0 && nj < n &&
                    mat[ni][nj] > best_val) {
                    best_val = mat[ni][nj];
                    best_i = ni;
                    best_j = nj;
                }
            }

            // If no neighbor is strictly greater, we’re at a local peak
            if (best_i == i && best_j == j) {
                return {i, j};
            }

            // Otherwise, move to the better neighbor
            i = best_i;
            j = best_j;
        }
    }
};
