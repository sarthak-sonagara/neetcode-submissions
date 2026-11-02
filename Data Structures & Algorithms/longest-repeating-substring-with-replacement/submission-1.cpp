class Solution {
public:
    int characterReplacement(string s, int k) {
        int j=0, maxi=0;
        int frq[26] = {0};
        int n = s.size();
        int ans=1;
        for(int i=0; i<n; i++) {
            frq[s[i]-'A']++;
            maxi = max(maxi,frq[s[i]-'A']);
            while(i-j+1-maxi>k) {
                frq[s[j]-'A']--;
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};
