// Last updated: 1/20/2026, 5:26:12 PM
class Solution {
    public long minCuttingCost(int n, int m, int k) {
        if (n <= k && m <= k) return 0;

        long minCost = Long.MAX_VALUE;

        if (n > k) {
            minCost = Math.min(minCost, tryCuts(n, k) + (m <= k ? 0 : tryCuts(m, k)));
        }

        if (m > k) {
            minCost = Math.min(minCost, tryCuts(m, k) + (n <= k ? 0 : tryCuts(n, k)));
        }

        return minCost;
    }

    private long tryCuts(int length, int k) {
        long minCost = Long.MAX_VALUE;

        for (int i = 1; i < length; i++) {
            int part1 = i;
            int part2 = length - i;

            if (part1 <= k && part2 <= k) {
                long cost = (long) part1 * part2;
                minCost = Math.min(minCost, cost);
            }
        }

        return minCost == Long.MAX_VALUE ? Long.MAX_VALUE : minCost;
    }
}