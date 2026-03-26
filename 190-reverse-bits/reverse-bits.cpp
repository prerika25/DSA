class Solution {
public:
    int reverseBits(int n) {
        string res="";
        for (int i = 0; i < 32; i++){
            if(n%2==1){
                res+='1';
            }
            else res+='0';
                n=n/2;
        }
        
        int m=res.size();
        long long result = 0;
        long long power = 1;
        for (int i =31; i>=0; i--) {
            if (res[i] == '1') {
                result += power;
            }
            power *= 2;
        }
        return result;
    }
};