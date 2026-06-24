class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        long long sum=0;
        long long maxsum=LONG_MIN;
        while(i<n){
            sum+=nums[i];
            if(sum>=maxsum){
                maxsum=sum;
            }
            if(sum<0){
                sum=0;
            } 
            i++;
        }
        return maxsum;
    }
};