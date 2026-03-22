class Solution {
public:
    bool isValid(string s) {
        stack<char> s2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                s2.push(s[i]);
            }
            else {
                if(s2.size()==0){
                    return false;
                }
                else if(s2.top()=='('&& s[i]==')'){
                    s2.pop();
                }
                else if(s2.top()=='{' && s[i]=='}'){
                    s2.pop();
                }
                else if(s2.top()=='[' && s[i]==']'){
                    s2.pop();
                }
                else{
                    return false;
                }
            }
        } 
        
        return s2.size()==0;
    }
};