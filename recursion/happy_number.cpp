class Solution {
public:
    bool isHappy(int n) {
        // base case
        if (n == 1) return true;
        if (n == 4) return false;   // 4 is the start of unhappy cycle

        int s = 0;
        int a = n;

        while (a != 0) {
            int b = a % 10;
            s += b * b;
            a /= 10;
        }

        return isHappy(s);
    }
};