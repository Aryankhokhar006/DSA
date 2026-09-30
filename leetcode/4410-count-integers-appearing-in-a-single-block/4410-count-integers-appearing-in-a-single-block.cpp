class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        unordered_set<int> seen;
        for (int i = 0; i < n; i++) {
           if (seen.count(nums[i])) {
                continue;
            }
            bool sp = true;
            int j = i + 1;
            while (j < n && nums[j] == nums[i]) {
                j++;
            }
            for (int k = j; k < n; k++) {
                if (nums[k] == nums[i]) {
                    sp = false;
                    break;
                }
            }

            if (sp) {
                count++;
            }
            seen.insert(nums[i]);
        }
        return count;
    }
};