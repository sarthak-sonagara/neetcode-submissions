class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=nums[0], ans=cur, n=nums.size();
        for(int i=1; i<n; i++) {
            cur = max(nums[i], cur + nums[i]);
            ans = max(ans, cur);
        }
        return ans;
    }
};
