class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size());
        partial_sum(nums.begin(), nums.end(), ans.begin());
        return ans;
    }
};