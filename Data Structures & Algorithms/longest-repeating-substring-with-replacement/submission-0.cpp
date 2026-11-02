class Solution {
public:
    int characterReplacement(string s, int k) {
        int j=0, sum=0;
        int frq[26] = {0};
        int n = s.size();
        int ans=1;
        for(int i=0; i<n; i++) {
            frq[s[i]-'A']++;
            sum++;
            int maxi = *(max_element(frq,frq+26));
            while(i>j && (sum-maxi)>k) {
                frq[s[j]-'A']--;
                sum--;
                maxi = *(max_element(frq,frq+26));
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};
