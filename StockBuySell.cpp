int maxProfit(vector<int>& prices) {
    int profit = 0;
    int n = prices.size();

    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }

    return profit;
}

//For input [96, 78]:
//prices[1] = 78, prices[0] = 96
//
//Since 78 < 96, no transaction is made
//
//So profit = 0
//
//? Correct output: 0
