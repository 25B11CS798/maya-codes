#include <stdio.h>

int main() {
    int num1, num2;


    if (scanf("%d %d", &num1, &num2) != 2) {
        return 1;
    }
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2; 
    int remainder = num1 % num2;
    printf("Sum:%d", sum);
    printf("Difference:%d", difference);
    printf("Product:%d", product);
    printf("Quotient:%d", quotient);
    printf("Remainder:%d", remainder);

    return 0;
}
