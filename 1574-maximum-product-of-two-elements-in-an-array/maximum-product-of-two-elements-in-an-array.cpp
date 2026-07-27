class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=1;
        int maxp=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                product=(nums[i]-1)*(nums[j]-1);
                maxp=max(maxp,product);
            }
        }
        return maxp;
    }
};