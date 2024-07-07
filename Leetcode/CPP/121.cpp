class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int out = 0;
        int mini = prices[0];
        for(int i = 1; i <n; i++){
            out = max(out, prices[i] - mini);
            mini = min(prices[i],mini);
        }
        return out;
    }
};