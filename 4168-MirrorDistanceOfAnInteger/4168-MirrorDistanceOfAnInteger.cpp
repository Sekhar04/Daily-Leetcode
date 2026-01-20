// Last updated: 1/20/2026, 5:26:08 PM
class Solution {
public:
    int mirrorDistance(int n) {
        int org = n;
        int rev = 0;
        while(n != 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        int res  = abs(org-rev);
        return res;
    }
};