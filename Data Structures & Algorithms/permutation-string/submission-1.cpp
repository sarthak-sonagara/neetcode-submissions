class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> map;
        int diff=0;
        int n=s1.size(), m=s2.size();
        for(char c : s1)
            map[c]--;
        for(int i=0; i<m; i++) {
            cout<<map.size()<<" ";
            map[s2[i]]++;
            if(!map[s2[i]])
                map.erase(s2[i]);
            if(i>=n) {
                map[s2[i-n]]--;
                if(!map[s2[i-n]])
                    map.erase(s2[i-n]);
            }
            if(map.empty())
                return true;
        }
        return false;
    }
};
