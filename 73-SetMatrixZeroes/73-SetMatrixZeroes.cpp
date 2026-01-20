// Last updated: 1/20/2026, 5:28:11 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows;
        unordered_set<int> cols;

        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i<n;i++) {
            for(int j = 0; j<m;j++) {
                if(matrix[i][j]==0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for (int r : rows) {
            for (int j = 0; j < m; j++) {
                matrix[r][j] = 0;
            }
        }
        
        for (int c : cols) {
            for (int j = 0; j < n; j++) {
                matrix[j][c] = 0;
            }
        }
        
    }
};