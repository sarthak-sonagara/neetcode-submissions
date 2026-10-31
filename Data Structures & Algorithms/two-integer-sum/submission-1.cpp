class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans(2);
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(mp.find(target - nums[i])!=mp.end()) {
                ans[0] = mp[target - nums[i]];
                ans[1] = i;
                break;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
