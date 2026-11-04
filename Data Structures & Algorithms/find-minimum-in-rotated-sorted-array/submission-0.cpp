class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0, right=nums.size(), last=nums.back(), ans=right;
        while(left<=right) {
            int mid = left + (right-left) / 2;
            if(nums[mid]>last)
                left = mid+1;
            else {
                ans = min(ans,mid);
                right = mid-1;
            }
        }
        return nums[ans];
    }
};
