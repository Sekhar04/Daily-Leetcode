// Last updated: 1/20/2026, 5:27:49 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        while (l < r){
            int sum = numbers[l] + numbers[r];
            if(sum == target) {
                return vector<int> {l+1,r+1};
            }else if(sum < target){
                l++;
            }else r--;
            
        }
        return {};
    }
};