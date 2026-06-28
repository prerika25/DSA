class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        for(int i=0;i<n;i++){
            int mid=low+(high-low)/2;
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]<target){
                high=mid-1;
            }
            else low=mid+1;
        }
        return -1;
    }
};