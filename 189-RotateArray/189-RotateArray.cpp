// Last updated: 1/20/2026, 5:27:45 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.end() - k);
        reverse(nums.end() - k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};