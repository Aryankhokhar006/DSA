class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        vector<int> aura;
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] > 0) {
                int ld = nums[i] % 10;
                nums[i] = nums[i] / 10;
                ans.push_back(ld);
            }
            reverse(ans.begin(), ans.end());
            for (int x : ans) {
                aura.push_back(x);
            }
            ans.clear();
        }
        return aura;
    }
};