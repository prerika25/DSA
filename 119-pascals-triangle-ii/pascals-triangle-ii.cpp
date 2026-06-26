class Solution {
public:
    vector<int>generaterow(int row){
        vector<int>ans;
        long long res=1;
        ans.push_back(1);
        for(int col=1;col<row;col++){
            res=res*(row-col);
            res=res/col;
            ans.push_back(res);
        }
        return ans;
    }
    vector<int> getRow(int rowIndex) {
        return generaterow(rowIndex+1);

    }
};