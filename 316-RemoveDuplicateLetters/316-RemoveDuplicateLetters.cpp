// Last updated: 1/20/2026, 5:27:26 PM
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26, 0);
        vector<bool> used(26, false);

        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        string st = "";

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            int idx = c - 'a';

            if (used[idx]) continue;

            while (!st.empty() &&
                   st.back() > c &&
                   last[st.back() - 'a'] > i) {
                used[st.back() - 'a'] = false;
                st.pop_back();
            }

            st.push_back(c);
            used[idx] = true;
        }
        return st;
    }
};
