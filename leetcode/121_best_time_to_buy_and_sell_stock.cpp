#include <iostream>
#include <vector>

using namespace std;


class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int finalProfit = 0;
            int minPrice = prices[0];

            for (int i = 1; i < prices.size(); i++) {
                int profit = prices[i] - minPrice;
                finalProfit = max(finalProfit, profit);
                minPrice = min(minPrice, prices[i]);
            }

            return finalProfit;
        }
};