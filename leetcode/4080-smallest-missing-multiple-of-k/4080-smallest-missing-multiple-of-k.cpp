class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int i =1; ;i++){
            bool found = false;
            int j =0;
            while(j<nums.size()){
                if(k*i == nums[j] ){
                    found = true;
                    break;
                }
                j++;
        }
        if(found == false){
            return k*i;
        }
        
    }
    return -1;
    }
};