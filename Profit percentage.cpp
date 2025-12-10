#include <stdio.h>

int main() {
    double CP, SP;
    scanf("%lf %lf", &CP, &SP);

    double profitPercent = ((SP - CP) / CP) * 100;

    printf("%.2f", profitPercent);

    return 0;
}
