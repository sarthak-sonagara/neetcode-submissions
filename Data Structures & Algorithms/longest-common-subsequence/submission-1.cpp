class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        vector<int> dp(m);
        for(int i=0; i<n; i++) {
            dp[0] = (text1[i]==text2[0]) ? 1 : dp[0];
            int prev = dp[0];
            for(int j=1; j<m; j++) {
                int t = dp[j];
                dp[j] = (text1[i]==text2[j]) ? prev+1 : max(dp[j-1],dp[j]);
                prev = t;
            }
        }
        return dp[m-1];
    }
};
