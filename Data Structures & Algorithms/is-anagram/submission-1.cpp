class Solution {
public:
    bool isAnagram(string s, string t) {
        int dict[26] = {0};
        int n = s.size(), m = t.size();
        if(n!=m)
            return false;
        for(int i=0; i<n; i++) {
            dict[s[i]-'a']++;
            dict[t[i]-'a']--;
        }
        for(int i=0; i<26; i++)
            if(dict[i])
                return false;
        return true;
    }
};
