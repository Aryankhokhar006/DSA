class Solution {
public:
    int strStr(string haystack, string needle) {
        int left =0;
        int mx = -1;
        int n = needle.size();
        int m = haystack.size();
        for(int right =0;right<m;right++){
             bool found = true;
            if(right - left+1 == needle.size()){
                int i =0;
                while(i<n){
                    if(haystack[left+i] != needle[i]){
                        found = false;
                        break; 
                    }
                    i++;
                }
                if(found == true){
                    return left;
                }
                left++;
            }
        }
        return -1;
    }
};