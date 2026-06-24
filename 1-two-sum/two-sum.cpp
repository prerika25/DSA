class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int first=nums[i];
            int second=target-first;
            if(mpp.find(second)!=mpp.end()){
                return {i,mpp[second]};
            }
            mpp[first]=i;
        }
        return {};
    }
};