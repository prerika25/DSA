class Solution {
public:
    int sumarr(vector<int>&nums,int midsum){
        int n = nums.size(); 
        int subarray = 1;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (sum + nums[i] <= midsum) {
                sum+= nums[i];
            }
            else {
                subarray++;
                sum = nums[i];
            }
        }
        return subarray;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int subarray=sumarr(nums,mid);
            if(subarray>k){
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
};