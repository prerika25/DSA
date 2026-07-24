class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxA=0;
        int n=heights.size();
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i])){
                int height=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()) width=i;
                else width=i-st.top()-1;
                maxA=max(maxA,width*height);
            }
            st.push(i);
        }
        return maxA;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>height(m,0);
        int maxArea=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1') height[j]++;
                else height[j]=0;
            }
            int area=largestRectangleArea(height);
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};