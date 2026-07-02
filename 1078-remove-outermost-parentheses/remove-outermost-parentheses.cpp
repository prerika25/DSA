class Solution {
public:
    string removeOuterParentheses(string s) {
        string t;
        int n=s.length();
        stack <int> st;
        for(char ch: s){
            if(ch=='('){
                if(!st.empty()){
                    st.push(ch);
                    t.push_back(ch);
                }
                else st.push(ch);
            }
            else{
                if(st.size()==1){
                    st.pop();
                }
                else{
                    st.pop();
                    t.push_back(ch);
                }
            }
        }
        return t;
    }
};