class Solution {
public:
    bool isPalindrome(int x) {
        long long original = x;
        long long update = 0;

        while (x > 0) {
            int lastdigit = x % 10;
            update = update * 10 + lastdigit;
            x = x / 10;
        }

        if (update == original) {
            return true;
        }

        return false;
    }
};