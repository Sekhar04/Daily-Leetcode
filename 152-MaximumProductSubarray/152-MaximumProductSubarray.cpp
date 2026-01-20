// Last updated: 1/20/2026, 5:27:51 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSum = nums[0];
        int minSum = nums[0];
        int ans = nums[0];
        for(int i = 1; i < nums.size();i++) {
            if(nums[i] < 0){
                swap(maxSum,minSum);
            }
            maxSum = max(nums[i],maxSum*nums[i]);
            minSum = min(nums[i],minSum*nums[i]);
            ans = max(maxSum,ans);
        }
        return ans;
    }
};