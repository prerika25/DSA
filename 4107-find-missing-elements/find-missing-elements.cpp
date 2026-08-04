class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int smallest=nums[0];
        int largest=nums[n-1];
        unordered_map<int,int>mpp;
        for(int i=smallest;i <= largest;i++){
            mpp[i]=1;
        }
        for(int i=0;i<n;i++){
            mpp[nums[i]]--;
        }
        vector<int>ans;
        for(auto it:mpp){
            if(it.second==1) ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};