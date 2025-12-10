#include <stdio.h>

int main() {
    int radius;
    float pi = 3.14;
    float area, perimeter;

    // Read the radius from the user
    scanf("%d", &radius);

    // Calculate the area
    area = pi * radius * radius;

    // Calculate the perimeter
    perimeter = 2 * pi * radius;

    // Print the results with 2 decimal places
    printf("%.2f
", area);
    printf("%.2f
", perimeter);

    return 0;
}
