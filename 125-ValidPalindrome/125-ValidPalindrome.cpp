// Last updated: 1/20/2026, 5:27:57 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int  l = 0;
        int  r = s.length() - 1;

        while (l < r) {
            while (l < r && !isalnum(s[l])) l++;
            while (l < r && !isalnum(s[r])) r--;

            if(tolower(s[l]) != tolower(s[r])) {
            return false;
            }
            l++;
            r--;
        }
        return true;
    }
};