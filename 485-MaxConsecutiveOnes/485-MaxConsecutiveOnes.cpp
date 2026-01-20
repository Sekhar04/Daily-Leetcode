// Last updated: 1/20/2026, 5:27:18 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0;
        int count = 0;
        int maxCount = 0;
        while (i < nums.size()) {
            if( nums[i] == 1){
                i++;
                count++;
                maxCount = max(maxCount,count);
            } else {
                count = 0;
                i++;
                continue;
            } 
        }
        return maxCount;
    }
};