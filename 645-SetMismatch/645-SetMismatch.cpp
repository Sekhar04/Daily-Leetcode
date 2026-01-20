// Last updated: 1/20/2026, 5:27:09 PM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int duplicate = -1, missing = -1;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                duplicate = nums[i];
            }
            else if (nums[i] > nums[i - 1] + 1) {
                missing = nums[i - 1] + 1;
            }
        }
        if (nums[0] != 1) missing = 1;
        if (nums[n - 1] != n) missing = n;

        return {duplicate, missing};
    }
};