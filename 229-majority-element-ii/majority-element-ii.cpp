class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int maxfreq=0;
        int final=0;
        for(auto it:mpp){
            if(it.second > nums.size()/3){
                ans.push_back(it.first);
            }
        }
       
        
        return ans;
    }
};