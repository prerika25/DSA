class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital=0;
        for(int i=0;i<word.length();i++){
            if(word[i]>=65 && word[i]<=90) 
                capital++;
        }
        if(capital==0 || capital==word.length()) return true;
        if(capital == 1 && word[0] >= 65 && word[0] <= 90)
            return true;
        return false;
    }
};