class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        stack<char>at;
        for(int i =0;i<s.length();i++){
            if(s[i] == '('){
                st.push(s[i]);
            }else if(s[i] == ')' && st.empty()){
                at.push(s[i]);
            }else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        int a = st.size() + at.size();
        return a;
        
    }
};