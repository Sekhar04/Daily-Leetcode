// Last updated: 1/20/2026, 5:27:56 PM
class Solution {
    public int singleNumber(int[] nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;  //XOR operation
        }
        return result;
    }
}