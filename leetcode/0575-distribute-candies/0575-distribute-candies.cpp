
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> ans;

        for (int i = 0; i < candyType.size(); i++) {
            ans[candyType[i]]++;
        }

        int n = candyType.size();

        return min((int)ans.size(), n / 2);
    }
};
