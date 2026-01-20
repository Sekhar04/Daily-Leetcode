// Last updated: 1/20/2026, 5:26:31 PM
class Solution {
public:
    string truncateSentence(string s, int k) {
        string res = "";
        int sc = 0;
        for (int i = 0; i <s.length(); i++) {
            if(s[i] == ' ') {
                sc++;
                if(sc == k) break;
            }
            res += s[i];
        }
        return res;
    }
};