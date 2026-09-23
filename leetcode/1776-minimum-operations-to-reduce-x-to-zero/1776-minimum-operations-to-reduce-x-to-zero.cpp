class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int maxlen = -1;
        int sum=0;
        int total=0;
        int value;
        int left=0;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
        }
         value = sum -x;
         if(value < 0)
            return -1;
         for(int right =0;right<nums.size();right++){
            total+=nums[right];
            while(total > value){
                total-=nums[left];
                left++;
            }
            if(total == value){
                maxlen = max(maxlen,right-left+1);
            }
         }
         if(maxlen == -1){
            return -1;
         }
         return nums.size() - maxlen;

        
    }
};