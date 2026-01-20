// Last updated: 1/20/2026, 5:27:37 PM
class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        final Set<Integer> seen = new HashSet<>();
        
        for (int i = 0; i < nums.length; i++) {
            if (i > k) {
                seen.remove(nums[i - k - 1]);  // Remove the oldest value outside the window
            }
            if (!seen.add(nums[i])) {
                return true;  // Duplicate found
            }
        }
        
        return false;
    }
}