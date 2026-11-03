class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1, right=INT_MAX, ans=INT_MAX;
        while(left<=right) {
            int mid = left + ((right-left) / 2);
            int sum = 0;
            for(int p : piles)
                sum += (p/mid) + (p%mid!=0);
            if(sum<=h) {
                ans = min(ans,mid);
                right = mid-1;
            } else
                left = mid+1;
        }
        return ans;
    }
};
