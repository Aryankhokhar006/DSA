class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long ans=INT_MIN;
        long long sum =0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
            
                
        }
        return ans;

    }
};