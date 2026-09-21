class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;   // important: handles INT_MIN

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double ans = 1;

        while (N > 0) {
            // If N is odd
            if (N % 2 == 1) {
                ans = ans * x;
            }

            // Square x
            x = x * x;

            // Divide exponent by 2
            N = N / 2;
        }

        return ans;
    }
};