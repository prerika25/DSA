class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum;
        vector<int>rightSum;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=0;
            int leftsum=0;
            while(j<i){
                leftsum+=nums[j];
                j++;
            }
            leftSum.push_back(leftsum);
            int k=n-1;
            int rightsum=0;
            while(k>i){
                rightsum+=nums[k];
                k--;
            }
            rightSum.push_back(rightsum);
        }
        int l=leftSum.size();
        int r=rightSum.size();
        vector<int>ans;
        for(int i=0;i<l;i++){
            ans.push_back(abs(leftSum[i]-rightSum[i]));            
        }
        return ans;
    }
};