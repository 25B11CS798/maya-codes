#include <stdio.h>

int main() {
    int X, Y, H;
    int total;

    // Read input
    scanf("%d %d %d", &X, &Y, &H);

    if (H <= 1) {
        total = X;  // Only first hour
    } else {
        total = X + (H - 1) * Y;  // First hour + extra hours
    }

    // Print total parking charges
    printf("%d
", total);

    return 0;
}
