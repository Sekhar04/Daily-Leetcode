// Last updated: 1/20/2026, 5:27:23 PM
class Solution {
    public void reverseString(char[] s) {
        if (s == null || s.length < 1 || s.length > 100000) return;
        int sz= s.length;
        int start = 0 , end = sz -1;
        while (start < end) {
            if (s[start] < 32 || s[start] > 126 || s[end] < 32 || s[end] > 126) return;

            // Swap characters
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            start++;
            end--;
        }

    }
}