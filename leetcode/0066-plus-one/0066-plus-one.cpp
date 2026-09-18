class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size()-1;
        int i =0;
        for(;n>=0;n--){
            if(digits[n]<9){
                digits[n]+=1;
                return digits;
            }else{
                digits[n] = 0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
        
    }
};