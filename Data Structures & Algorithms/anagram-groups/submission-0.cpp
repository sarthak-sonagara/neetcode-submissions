class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mp;
        vector<vector<string>> ans;
        for(string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            if(mp.find(t)!=mp.end()) {
                ans[mp[t]].push_back(s);
            } else {
                mp[t] = ans.size();
                vector<string> temp;
                temp.push_back(s);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
