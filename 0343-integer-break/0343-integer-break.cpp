class Solution {
public:
    int integerBreak(int n) {
        int result = 0;
        for (int i = 2; i <= n; i++) {
            int Quotient = n / i;
            int Remainder = n % i;
            int product = pow(Quotient + 1, Remainder) * pow(Quotient, i - Remainder);
            result = max(result, product);
        }
        return result;
    }
};