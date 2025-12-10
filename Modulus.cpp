#include <stdio.h>

int main() {
    int num1, num2;
    
    // Read two numbers from two different lines
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    // Calculate modulus
    int result = num1 % num2;
    
    // Print the result
    printf("%d
", result);
    
    return 0;
}
