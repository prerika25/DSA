class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int bestbuy=prices[0];
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]>bestbuy){
                maxprofit=max(maxprofit,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return maxprofit;
    }
};