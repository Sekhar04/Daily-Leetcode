// Last updated: 1/20/2026, 5:28:21 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length() - 1;
        while (n >= 0 && s[n] == ' ') n--;
        int len = 0;
        while (n >= 0 && s[n] != ' ') {
            len++;
            n--;
        }
        return len;
    }
};