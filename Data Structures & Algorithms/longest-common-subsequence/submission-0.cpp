class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        vector<int> cur(m), prev(m);
        for(int i=0; i<n; i++) {
            cur[0] = (text1[i]==text2[0]) ? 1 : prev[0];
            for(int j=1; j<m; j++)
                cur[j] = (text1[i]==text2[j]) ? prev[j-1]+1 : max(cur[j-1],prev[j]);
            swap(cur,prev);
        }
        return prev[m-1];
    }
};
