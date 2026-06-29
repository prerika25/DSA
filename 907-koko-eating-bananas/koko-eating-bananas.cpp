class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int low=1;
        int high=piles[n-1];
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours=0;
            for(int piles:piles){
                hours+=(piles+mid-1)/mid;
            }
            if(hours<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;

        }
        return ans;
    }
};