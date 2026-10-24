class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<long long> total(n+1,INT_MAX);
        total[k] = 0;
        for(int i=1; i<n; i++) {
            for(vector<int> &t : times) {
                total[t[1]] = min(total[t[1]],total[t[0]]+t[2]);
            }
        }
        int ans = -1;
        for(int i=1; i<=n; i++) {
            if(total[i]==INT_MAX)
                return -1;
            ans = max((int)total[i],ans);
        }
        return ans;
    }
};
