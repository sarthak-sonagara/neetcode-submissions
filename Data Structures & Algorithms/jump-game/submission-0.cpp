class Solution {
public:
    bool canJump(vector<int>& nums) {
        int vision=0, n=nums.size();
        for(int i=0; i<n; i++) {
            if(i>vision)
                return false;
            vision = max(vision, i+nums[i]);
        }
        return vision>=n-1;
    }
};
