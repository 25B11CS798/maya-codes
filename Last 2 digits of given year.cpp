#include <stdio.h>

int main() {
    int Year;
    scanf("%d", &Year);

    printf("%02d", Year % 100);  // %02d ensures two digits with leading zero if needed

    return 0;
}
