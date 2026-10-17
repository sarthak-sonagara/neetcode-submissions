class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0, right=numbers.size()-1;
        vector<int> ans;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum>target) {
                right--;
            } else if(sum<target) {
                left++;
            } else {
                ans = {left+1,right+1};
                return ans;
            }
        }
        return ans;
    }
};
