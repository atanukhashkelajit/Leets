class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while (x != 0) {
            int d = x % 10;
            res = res * 10 + d;
            if (res > INT_MAX || res < INT_MIN) return 0;
            x /= 10;
        }
        return (int)res;
    }
};
