// Last updated: 1/20/2026, 5:28:07 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int num : nums){
            if(num == target) return true;
        }
        return false;
    }
};