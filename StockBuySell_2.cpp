class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        int maxprofit=0;
        int minprice=INT_MAX; //int minprice=prices[0]
        for(int i=0;i<n;i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }else{
                maxprofit=max(maxprofit,prices[i]-minprice);
            }
        }
        return maxprofit;
    }
};

/*
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

*/
