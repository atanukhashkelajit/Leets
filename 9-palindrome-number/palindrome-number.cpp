class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long reversed = 0;

        while (x > 0) {
            int last = x % 10;
            reversed = reversed * 10 + last;
            x /= 10;
        }

        return reversed == original;
    }
};
