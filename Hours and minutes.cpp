#include <stdio.h>

int main() {
    int minutes;
    scanf("%d", &minutes);
    int hours = minutes / 60;
    int remaining_minutes = minutes % 60;
    printf("%d Hour(s) %d Minute(s)", hours, remaining_minutes);
    
    return 0;
}
