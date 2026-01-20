// Last updated: 1/20/2026, 5:28:43 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 1;i < nums.size();i++) {
            if(nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
            }
        }
        return k;
    }
};