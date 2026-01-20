// Last updated: 1/20/2026, 5:28:38 PM
class Solution {
    public int divide(int dividend, int divisor) {
        if (dividend == Integer.MIN_VALUE && divisor == -1)
            return Integer.MAX_VALUE; // handle overflow

        // Determine sign
        boolean negative = (dividend < 0) ^ (divisor < 0);

        // Convert to long and take absolute value to handle edge cases
        long lDividend = Math.abs((long) dividend);
        long lDivisor = Math.abs((long) divisor);

        int result = 0;

        while (lDividend >= lDivisor) {
            long temp = lDivisor, multiple = 1;

            while (lDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            lDividend -= temp;
            result += multiple;
        }

        return negative ? -result : result;
    }
}