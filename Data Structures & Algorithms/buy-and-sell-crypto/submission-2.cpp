class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int n=prices.size();
        int profit=0;
        int max_profit=0;
        for(int i=1;i<n;i++){
            minimum = min(minimum, prices[i]);
            profit=prices[i]-minimum;
            max_profit=max(max_profit,profit);
        }
        return max_profit;

    }
};
