#include <stdio.h>

int main() {
    int X, Y, Z;
    int total_money, max_chocolates;
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    total_money = (X * 5) + (Y * 10);
    max_chocolates = total_money / Z;
    printf("%d", max_chocolates);

    return 0;
}
