// Last updated: 1/20/2026, 5:28:54 PM
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        Arrays.sort(nums); // Step 1: Sort the array
        
        for (int i = 0; i < nums.length - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
            
            int left = i + 1;
            int right = nums.length - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    res.add(Arrays.asList(nums[i], nums[left], nums[right]));
                    
                    // Skip duplicate numbers for left pointer
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Skip duplicate numbers for right pointer
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++; // Need a bigger sum
                } 
                else {
                    right--; // Need a smaller sum
                }
            }
        }
        
        return res;
    }
}
