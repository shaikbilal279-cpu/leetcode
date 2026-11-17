class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // Create a new matrix with dimensions n x m
        vector<vector<int>> result(n, vector<int>(m));
        
        // Swap row and column indices
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                result[j][i] = matrix[i][j];
            }
        }
        
        return result;
    }
};
