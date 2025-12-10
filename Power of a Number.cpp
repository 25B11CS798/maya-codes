#include <stdio.h>

long long modPower(long long x, long long y, long long M) {
    long long result = 1;
    x = x % M;

    while (y > 0) {
        if (y % 2 == 1)      // If y is odd
            result = (result * x) % M;

        x = (x * x) % M;     // Square the base
        y = y / 2;           // Reduce exponent
    }
    return result;
}

int main() {
    long long x, y, M;
    scanf("%lld %lld %lld", &x, &y, &M);

    printf("%lld", modPower(x, y, M));
    return 0;
}
