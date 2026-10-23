class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            int sum =0;
            int n = nums[i];
            while(n > 0){
                    int last = n %10;
                    sum += last;
                    n = n/10;}
                ans.push_back(sum);   
            }
             int mx = ans[0];
        for(int i =0;i<ans.size();i++){
           mx = min(mx, ans[i]);
        }
        return mx;
        
    }
};