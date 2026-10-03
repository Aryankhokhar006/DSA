class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int profit = 0;
        int minimum = prices[0];
        for(int i =1 ;i<prices.size();i++){
            int low = prices[i] - minimum;
            profit = max(profit,low);
            minimum = min(minimum,prices[i]);
        }
        return profit;
    }
};
