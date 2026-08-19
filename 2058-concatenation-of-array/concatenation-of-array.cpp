class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int cnt=0;
        while(cnt<2){
            for(int i=0;i<nums.size();i++){
                ans.push_back(nums[i]);
            }
            cnt++;
        }
        return ans;
    }
};