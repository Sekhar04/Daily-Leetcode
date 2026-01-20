// Last updated: 1/20/2026, 5:26:27 PM
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        long long ans = 0;
        int count = 0;
        int minNum = INT_MAX;

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j]<0) count++;
                int ax =abs(matrix[i][j]);
                minNum=min(minNum,ax);
                ans+=ax;
            }
        } 
        if(count%2==0) return ans; 
        return ans - 2*minNum;
    }
};