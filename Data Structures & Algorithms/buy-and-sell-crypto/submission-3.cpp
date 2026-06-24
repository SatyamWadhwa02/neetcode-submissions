class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int n=prices.size();
        int max_profit=0;
        for(int i=1;i<n;i++){
            minimum = min(minimum, prices[i]);
            max_profit=max(max_profit,prices[i]-minimum);
        }
        return max_profit;

    }
};
