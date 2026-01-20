// Last updated: 1/20/2026, 5:27:22 PM
class Solution {
    public String toHex(int num) {
    if (num == 0) return "0";

    char[] hexMap = "0123456789abcdef".toCharArray();
    StringBuilder hex = new StringBuilder();

    // treat as unsigned 32-bit
    long n = num & 0xFFFFFFFFL;

    while (n > 0) {
        int remainder = (int)(n % 16);
        hex.insert(0, hexMap[remainder]);
        n /= 16;
    }

    return hex.toString();
}
 
}