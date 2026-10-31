class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int s =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == 0){
                s++;
            }
        }
        int a =0;
       for(int i = 0; i < nums.size()-s; i++){
            if(nums[i] == 0){
                a++;
            }
        }
        return a;
        
    }
};