class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long place = 1;

        // Build x from right to left
        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                x = digit * place + x;
                place *= 10;
            }

            n /= 10;
        }

        // Find sum of digits of x
        long long temp = x;
        long long sum = 0;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        return x * sum;
    }
};