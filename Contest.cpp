#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int aand = a & b;
            int aor  = a | b;
            int axor = a ^ b;

            if (aand < k && aand > max_and)
                max_and = aand;

            if (aor < k && aor > max_or)
                max_or = aor;

            if (axor < k && axor > max_xor)
                max_xor = axor;
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);

    return 0;
}

