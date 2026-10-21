class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(!nums.size()) {
            if(!target) {
                vector<int> temp;
                ans.push_back(temp);
            }
            return ans;
        }

        int t = nums.back();
        int c = 0;
        nums.pop_back();
        while(target>=0) {
            vector<int> temp = nums;
            vector<vector<int>> tans = combinationSum(temp,target);
            for(vector<int> &tv : tans)
                for(int i=0; i<c; i++)
                    tv.push_back(t);
            target -= t;
            
            c++;
            ans.insert(ans.end(), tans.begin(), tans.end());
        }
        return ans;
    }
};
