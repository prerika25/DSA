class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        int cnt=0;
        for(int i=0;i<m;i++){
            if(goal[i]==s[0]){
                cnt=i;
            }
            if(s.substr(0,n)==goal.substr(cnt)+goal.substr(0,cnt)){
                return true;
            }
            
        }
        
        return false;
    }
};