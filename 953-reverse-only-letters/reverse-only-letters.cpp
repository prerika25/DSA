class Solution {
public:
    string reverseOnlyLetters(string s) {
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if( ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) &&( (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z')) ) {
                    swap(s[i],s[j]);
                }
            }
        }
        
        
        return s;
        
    }
};