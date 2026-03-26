class Solution {
public:
    int findComplement(int num) {
        string res="";
        int temp=num;
        while(temp>0){
            if(temp%2==1) {
                res+='1';
            }
            else res+='0';
        temp/=2;
        }
        
        for(int i=0;i<res.size();i++){
            if(res[i]=='1'){
                res[i]='0';
            }
            else res[i]='1';            
        }      
        int result = 0;
        long long power = 1;
        for (int i =0; i<res.size(); i++) {
            if (res[i] == '1') {
                result += power;
            }
            power *= 2;
        }
        return result;        
    }
};