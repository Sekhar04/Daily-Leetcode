// Last updated: 1/20/2026, 5:27:33 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 1;
        int n = nums.size();
        int sumn = n * (n + 1) / 2;
        int sum = 0;
        for (int i : nums) {
            sum += i;
        }
        return sumn - sum;
    }
};