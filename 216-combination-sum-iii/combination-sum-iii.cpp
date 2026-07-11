class Solution {
public:
    set<vector<int>>s;
    void combin(int idx,int k,int n,vector<vector<int>>&ans,vector<int>temp){
        if(n==0 && temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if (idx > 9 || n < 0 || temp.size() >= k)
            return;
        temp.push_back(idx);
        combin(idx+1,k,n-idx,ans,temp);
        temp.pop_back();
        combin(idx+1,k,n,ans,temp);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        combin(1,k,n,ans,temp);
        return ans;       
    }
};