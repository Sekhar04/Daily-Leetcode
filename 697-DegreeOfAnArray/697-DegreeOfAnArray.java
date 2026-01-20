// Last updated: 1/20/2026, 5:27:05 PM
class Solution {
    public int findShortestSubArray(int[] nums) {
        Map<Integer, Integer> count = new HashMap<>();
        Map<Integer, Integer> firstIndex = new HashMap<>();
        int degree = 0;
        int minLength = nums.length;

        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];

            // Record the first time we see this number
            if (!firstIndex.containsKey(num)) {
                firstIndex.put(num, i);
            }

            // Count how many times the number appears
            count.put(num, count.getOrDefault(num, 0) + 1);

            // Update degree and shortest subarray length
            if (count.get(num) > degree) {
                degree = count.get(num);
                minLength = i - firstIndex.get(num) + 1;
            } else if (count.get(num) == degree) {
                minLength = Math.min(minLength, i - firstIndex.get(num) + 1);
            }
        }

        return minLength;
    }
}