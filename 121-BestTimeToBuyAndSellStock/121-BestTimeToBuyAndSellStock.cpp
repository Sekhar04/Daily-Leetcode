// Last updated: 1/20/2026, 5:27:59 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = 0;

        for(int price : prices) {
            buy = min(price,buy);
            profit = max(profit,price-buy);
        }
        return profit;
    }
};