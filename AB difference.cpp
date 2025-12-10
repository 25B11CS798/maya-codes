#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int correct = A + B;
    int wrong = A * B;
    int diff = abs(correct - wrong);

    printf("%d", diff);
    return 0;
}

