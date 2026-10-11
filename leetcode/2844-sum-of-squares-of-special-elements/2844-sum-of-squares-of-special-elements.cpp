class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        long long sum =0;
        vector<int>ans;
        for(int i =1;i<=n;i++){
            if(n % i == 0){
                ans.push_back(nums[i -1]);
            }
        }
     for(int x : ans){
        sum += x * x;
     }

     return sum;

        
    }
};