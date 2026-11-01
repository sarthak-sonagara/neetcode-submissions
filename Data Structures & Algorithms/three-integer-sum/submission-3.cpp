class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> seen;
        set<vector<int>> anset;
        vector<vector<int>> ans;
        seen.insert(-nums[0]);
        for(int i=1; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                int sum = nums[i]+nums[j];
                vector<int> temp = {nums[i],nums[j],-sum};
                sort(temp.begin(),temp.end());
                if(seen.find(sum)!=seen.end() && 
                    anset.find(temp)==anset.end()) {
                    ans.push_back(temp);
                    anset.insert(temp);
                }
            }
            seen.insert(-nums[i]);
        }
        return ans;
    }
};
