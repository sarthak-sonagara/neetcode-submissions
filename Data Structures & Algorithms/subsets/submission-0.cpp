class Solution {

    void help(int i, vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans) {
        if(i==nums.size()) {
            ans.push_back(temp);
            return;
        }
        help(i+1, nums, temp, ans);
        temp.push_back(nums[i]);
        help(i+1, nums, temp, ans);
        temp.pop_back();
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        help(0,nums,temp,ans);
        return ans;
    }
};
