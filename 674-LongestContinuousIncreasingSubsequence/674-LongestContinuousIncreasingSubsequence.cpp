// Last updated: 1/20/2026, 5:27:08 PM
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i = 1;
        int count = 1;
        int maxCount = 1;
        while (i < nums.size()) {
            if(nums[i] > nums[i - 1]) {
                i++;
                count++;
                maxCount = max(maxCount,count);
            } else {
                count = 1;
                i++;
                continue;
            }
        }
        return maxCount;
    }
};