// Last updated: 1/20/2026, 5:27:53 PM
class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int can = 0;
        for (int num : nums) {
            if (count == 0) {
                can = num;
        }
        count += ( num == can ) ? 1 : -1;
        }
    return can;
    }

}