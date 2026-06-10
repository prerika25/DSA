class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>ls;
        for(int i=1;i*i<=num;i++){
            if(num%i==0){
                ls.push_back(i);
                if((num/i)!=i){
                    ls.push_back(num/i);
                }
            }
        }
        int sum=0;
        
        for(int i=0;i<ls.size();i++){
            sum+=ls[i];
        }
        sum=sum-num;
        if(sum==num){
            return true;
        }
        else return false;
    }
};