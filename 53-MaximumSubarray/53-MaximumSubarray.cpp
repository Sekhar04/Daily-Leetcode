// Last updated: 1/20/2026, 5:28:26 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum = 0;
        int maxsum = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++) {
            csum = max(nums[i],csum + nums[i]);
            maxsum = max(csum, maxsum);
        }
        return maxsum;
    }
};