#include <stdio.h>

int main() {
    double CP, SP;
    scanf("%lf %lf", &CP, &SP);

    double lossPercent = ((CP - SP) / CP) * 100;

    printf("%.2f", lossPercent);

    return 0;
}
