class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for (int x : nums) {
            freq[x]++;
        }
        for (int x : nums) {
            if (freq[x] > 0 && ans.size() < nums.size()) {
                if (freq[x] > 2)
                    freq[x] = 2;
                ans.push_back(x);
                freq[x]--;
            }
        }
        nums = ans;
        return nums.size();
    }
};