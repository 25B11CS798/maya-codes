#include <stdio.h>

int main() {
    int Average, W1, W2, W3;
    scanf("%d %d %d", &Average, &W1, &W2);
    W3 = 3 * Average - W1 - W2;

    printf("%d", W3);
    
    return 0;
}
