class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        long long minimum = INT_MAX;
        for(int i =0;i<nums.size();i+=2){
            string a = to_string(nums[i]) + to_string(nums[i+1]);
            long long num = stoll(a);
            minimum = min(minimum,num);
        }
        return minimum;
        
    }
};