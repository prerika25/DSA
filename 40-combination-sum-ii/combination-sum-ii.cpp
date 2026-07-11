class Solution {
public:
    set<vector<int>> s;
    void getallcombin(vector<int>&arr,int idx, int tar,vector<vector<int>>&ans,vector<int>&combin){
        if(tar==0){
            if(s.find(combin)==s.end()){
                ans.push_back({combin}); 
                s.insert(combin);
            }    
            return;
        }
        if(idx==arr.size() || tar<0){
            return;
        }
        combin.push_back(arr[idx]);
        getallcombin(arr,idx+1,tar-arr[idx],ans,combin);
        combin.pop_back();
        while (idx + 1 < arr.size() && arr[idx] == arr[idx + 1]) {
            idx++;
        }
        getallcombin(arr,idx+1,tar,ans,combin);
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>combin;
        sort(arr.begin(),arr.end());
        getallcombin(arr,0,target,ans,combin);
        return ans;   
    }
};