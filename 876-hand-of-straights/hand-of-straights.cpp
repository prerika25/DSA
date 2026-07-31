class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) return false;
        sort(hand.begin(),hand.end());
        unordered_map<int,int>mpp;
        int n=hand.size();
        for(int i=0;i<n;i++){
            mpp[hand[i]]++;
        }
        for(int x:hand){
            if(mpp[x]==0) continue;
            for(int i=0;i<groupSize;i++){
                if(mpp[x+i]==0) return false;
                mpp[x+i]--;
            }
        }        
        return true;
    }
};