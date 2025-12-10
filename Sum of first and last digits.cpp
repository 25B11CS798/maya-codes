#include <stdio.h>

int main() {
    int N, lastDigit, firstDigit;
    scanf("%d", &N);
    lastDigit = N % 10;
    firstDigit = N;
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
}
    printf("%d", firstDigit + lastDigit);

    return 0;
}
