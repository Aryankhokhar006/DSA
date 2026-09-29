class Solution {
public:
    int maxDepth(string s) {
        char c = '(';
        char r = ')';
        int mx = 0;
        int count = 0;
            for(int i =0;i<s.length();i++){
                if(s[i] == c){
                    count+=1;
                }else if(s[i] == r){
                    count-=1;
                }
                mx = max(mx,count);

            }
            return mx;
        
    }
};