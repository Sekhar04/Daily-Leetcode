// Last updated: 1/20/2026, 5:28:13 PM
class Solution {
    public int climbStairs(int n) {
        if (n <= 2) return n;

        int first = 1;
        int second = 2;

        for (int i = 3; i <= n; i++) {
            int third = first + second;
            first = second;
            second = third;
        }

        return second;
    }
}