#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    int remaining_capacity = Z - Y;
    int max_mangoes = remaining_capacity / X;
    printf("%d", max_mangoes);
    return 0;
}
