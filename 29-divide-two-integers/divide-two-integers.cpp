class Solution {
public:
    int divide(int dividend, int divisor) {

        // Overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine sign
        bool sign = (dividend >= 0) == (divisor >= 0);

        // Convert to positive long long
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long long ans = 0;

        while (n >= d) {
            long long cnt = 0;

            // Find the largest multiple of divisor
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }

            ans += (1LL << cnt);
            n -= (d << cnt);
        }

        if (!sign)
            ans = -ans;

        return (int)ans;
    }
};