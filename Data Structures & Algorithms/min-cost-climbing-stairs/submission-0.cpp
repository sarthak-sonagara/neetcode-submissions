class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size(), a0=0, a1=0, ans=0;
        for(int i=2; i<=n; i++) {
            ans = min(a0+cost[i-2], a1+cost[i-1]);
            a0=a1;
            a1=ans;
        }
        return ans;
    }
};
