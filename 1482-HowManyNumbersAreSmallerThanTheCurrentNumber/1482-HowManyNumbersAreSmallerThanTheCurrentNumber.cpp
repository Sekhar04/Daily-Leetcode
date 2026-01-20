// Last updated: 1/20/2026, 5:26:42 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int j = 0;
        int count = 0;
        int n = nums.size();
        vector<int> ans;
        while(j<n){
            for(int i = 0; i<n;i++){
                if(nums[j]>nums[i]) {
                    count ++;
                }
            }
            ans.push_back(count);
            count = 0;
            j++;
        }
        return ans;
    }
};