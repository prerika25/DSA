class Solution {
public:
    int digitProduct(int n){
        if (n == 0) return 0;
        int product = 1;
        while (n > 0) {
            int digit = n % 10;
            product *= digit;
            n /= 10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while (true) {
            int product = digitProduct(n);
            if (product % t == 0)
                return n;
            n++;
        }
    }
};