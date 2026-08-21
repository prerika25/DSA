class Solution {
public:
    int maxArea(vector<int>& height) {
        int size=height.size();
        int area;
        int maxwater=0;
        int lp=0,rp=size-1;
        while(lp<rp){
            int width=rp-lp;      
            int h=min(height[lp],height[rp]);
            area=width*h;
            maxwater=max(maxwater,area);
            height[lp]<height[rp]?lp++:rp--;
        }
    
    return maxwater;
    }
};