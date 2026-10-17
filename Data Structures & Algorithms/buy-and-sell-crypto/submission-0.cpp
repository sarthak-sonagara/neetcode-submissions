class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, mini = prices[0];
        for(int p : prices) {
            ans = max(ans, p-mini);
            mini = min(mini, p);
        }
        return ans;
    }
};
