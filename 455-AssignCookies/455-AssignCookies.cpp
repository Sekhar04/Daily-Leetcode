// Last updated: 1/20/2026, 5:27:19 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0;
        int j = 0;
        int ans = 0;

        while(1) {
            if(j >= s.size() || i >= g.size()) {
                break;
            }
            if(s[j] < g[i]) {
                j++;
            }
            else if(s[j] >= g[i]) {
                i++;
                j++;
                ans++;
            }
        }
        return ans;
    }
};