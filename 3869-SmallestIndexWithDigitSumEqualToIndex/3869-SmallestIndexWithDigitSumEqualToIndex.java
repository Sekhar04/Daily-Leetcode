// Last updated: 1/20/2026, 5:26:09 PM
class Solution {
    public int smallestIndex(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            if (digitSum(nums[i]) == i) {
                return i;
            }
        }
        return -1;
    }

    // Helper function to calculate digit sum
    private int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10; // get the last digit
            num /= 10;       // remove the last digit
        }
        return sum;
        
    }
}