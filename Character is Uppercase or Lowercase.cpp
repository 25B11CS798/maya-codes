#include <stdio.h>

int main() {
    char ch;

    // Read a single character
    scanf("%c", &ch);

    // Check uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("uppercase alphabet
");
    }
    // Check lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("lowercase alphabet
");
    }
    // Otherwise not alphabet
    else {
        printf("not an alphabet
");
    }

    return 0;
}

