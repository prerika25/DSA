class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int m=s.length()-1;
        for(int i=m;i>=0;i--){
           if(s[i]==' '){
                if(count>0) break;
            }
            else count++;
               
        }
    return count;
    }
};