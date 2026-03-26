class Solution {
public:
    int hammingWeight(int n) {
        string res="";
        for(int i=0;i<32;i++){
            if(n%2==1){
                res+='1';
            }
            else res+='0';
            n=n/2;
        }
        reverse(res.begin(),res.end());
        
        int count=0;
        for(int i=31;i>=0;i--){
            if(res[i]=='1'){
                count++;
            }
        }
        return count;
    }
};