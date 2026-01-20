// Last updated: 1/20/2026, 5:28:22 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0, r = m - 1;
        int t = 0, b = n - 1;

        vector<int> res;

        while (t <= b && l <= r) {

            // top row
            for (int col = l; col <= r; col++) {
                res.push_back(matrix[t][col]);
            }
            t++;

            // right column
            for (int row = t; row <= b; row++) {
                res.push_back(matrix[row][r]);
            }
            r--;

            // bottom row
            if (t <= b) {
                for (int col = r; col >= l; col--) {
                    res.push_back(matrix[b][col]);
                }
                b--;
            }

            // left column
            if (l <= r) {
                for (int row = b; row >= t; row--) {
                    res.push_back(matrix[row][l]);
                }
                l++;
            }
        }
        return res;
    }
};
