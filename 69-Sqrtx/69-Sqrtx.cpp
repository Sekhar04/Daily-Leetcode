// Last updated: 1/20/2026, 5:28:14 PM
class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        int left = 1, right = x / 2, result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Use long to prevent integer overflow
            long square = (long) mid * mid;

            if (square == x) {
                return mid;
            } else if (square < x) {
                result = mid;  // Store result as possible answer
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;     
    }
};