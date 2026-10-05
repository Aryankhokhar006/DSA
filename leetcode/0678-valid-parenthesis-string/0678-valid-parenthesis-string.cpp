class Solution {
public:
    bool checkValidString(string s) {
        stack<int>open;
        stack<int>close;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '('){
                open.push(i);
            }else if(s[i] == '*'){
                close.push(i);
            }else{
                if(!open.empty()){
                    open.pop();
                }
                else if(!close.empty()){
                    close.pop();
                }else{
                    return false;
                }
            }
            
        }
        while(!open.empty() && !close.empty()){
            if(open.top() > close.top()){
                return false;
            }
            open.pop();
            close.pop();
        }
        return open.empty();
    }
};