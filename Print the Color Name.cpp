#include <stdio.h>
#include <ctype.h>  // For toupper()

int main() {
    char code;

    // Read input character
    scanf(" %c", &code);

    // Convert to uppercase for case-insensitive comparison
    code = toupper(code);

    // Check color code
    switch(code) {
        case 'V':
            printf("Violet
");
            break;
        case 'I':
            printf("Indigo
");
            break;
        case 'B':
            printf("Blue
");
            break;
        case 'G':
            printf("Green
");
            break;
        case 'Y':
            printf("Yellow
");
            break;
        case 'O':
            printf("Orange
");
            break;
        case 'R':
            printf("Red
");
            break;
        default:
            printf("-1
");
    }

    return 0;
}
