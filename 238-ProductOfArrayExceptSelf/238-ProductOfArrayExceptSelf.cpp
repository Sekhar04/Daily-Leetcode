// Last updated: 1/20/2026, 5:27:34 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> sufres(n);
        vector<int> preres(n);
        vector<int> res(n);

        sufres[n-1] = 1;
        for(int i = n - 2; i >= 0; i--) {
            sufres[i] =sufres[i + 1] * nums[i + 1];
        }
        
        preres[0] = 1;
        for(int i = 1;i < n; i++) {
            preres[i] = preres[i - 1] * nums[i - 1];
        }

        for(int i = 0;i < n; i++) {
            res[i] = sufres[i] * preres[i];
        }
        return res;
    }
};