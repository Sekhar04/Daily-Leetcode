// Last updated: 1/20/2026, 5:27:01 PM
class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] += 32;
            }
        }
        return s;
    }
};