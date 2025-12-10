#include <stdio.h>

int main() {
    int N;
    
    // Read number of Rs.2000 notes
    scanf("%d", &N);
    
    // Calculate number of Rs.500 notes
    int num500 = N * 4;
    
    // Print the result
    printf("%d
", num500);
    
    return 0;
}
