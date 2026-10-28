class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int start = -1, end = -1;
        vector<vector<int>> ans;
        for(vector<int> &in : intervals) {
            if(end < in[0]) {
                if(start != -1)
                    ans.push_back({start,end});
                start = in[0];
                end = in[1];
            } else {
                end = max(end, in[1]);
            }
        }
        if(start != -1)
            ans.push_back({start,end});
        return ans;
    }
};
