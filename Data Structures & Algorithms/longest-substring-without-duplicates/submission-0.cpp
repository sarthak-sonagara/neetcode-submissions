class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool dict[128] = {false};
        int left=0, right=0, ans=1, n=s.size();
        if(!n)
            return 0;
        while(right<n) {
            if(dict[s[right]])
                dict[s[left++]] = false;
            else
                dict[s[right++]] = true;
            ans = max(ans, right - left);
        }
        return ans;
    }
};
