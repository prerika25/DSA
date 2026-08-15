class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            ans^=nums[i];
            cnt++;
        }
        if(ans!=0) return n;
        for(int num:nums){
            if(num!=0) return n-1;
        }
        return 0;
    }
};