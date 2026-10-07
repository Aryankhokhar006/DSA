class Solution {
public:
    int maxScore(string s) {
        int mx= 0;
        vector<char>left;
        vector<char>right;
        for(int i =0;i<s.length()-1;i++){
            if(s[i] == '0'){
                left.push_back(s[i]);
            }
            right.clear();
            int j =i+1;
            while(j<s.length()){
                if(s[j] == '1'){
                    right.push_back(s[i]);
                }
                j++;
            }
          mx = max(mx, (int)(left.size() + right.size()));

        }
        return mx;
    }
};