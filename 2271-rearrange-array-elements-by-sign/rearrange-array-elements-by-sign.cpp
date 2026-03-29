class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posind=0;
        int negind=1;
        int n=nums.size();
        vector<int>temp(n);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                temp[posind]=nums[i];
                posind=posind+2;
            }else{
                temp[negind]=nums[i];
                negind=negind+2;
            }
        }
        return temp;
    }
};