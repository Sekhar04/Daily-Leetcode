// Last updated: 1/20/2026, 5:26:53 PM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true;
        bool dec = true;
        for (int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[i - 1]) inc = false;
            if(nums[i] > nums[i - 1]) dec = false;

        }
        return inc || dec;
    }
};