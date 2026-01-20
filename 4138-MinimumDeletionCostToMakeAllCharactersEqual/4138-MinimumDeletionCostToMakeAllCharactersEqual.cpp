// Last updated: 1/20/2026, 5:26:11 PM
class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        long long totalCost = 0;
        for (int c : cost) totalCost += c;

        vector<long long> charCost(26, 0);
        for (int i = 0; i < s.size(); i++) {
            charCost[s[i] - 'a'] += cost[i];
        }

        long long minCost = LLONG_MAX;
        for (long long keptCost : charCost) {
            if (keptCost > 0) {
                minCost = min(minCost, totalCost - keptCost);
            }
        }

        return minCost;
    }
};