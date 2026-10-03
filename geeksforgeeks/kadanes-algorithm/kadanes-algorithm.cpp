class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int maximum = INT_MIN;
        int left = 0;
        int sum =0;
        for(int right =0;right<arr.size();right++){
            sum+=arr[right];
            maximum = max(maximum,sum);
            if(sum < 0 ){
                sum =0;
                left++;
            }
            
        }
        
        return maximum;
        
    }
};