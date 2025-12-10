#include <stdio.h>

int main() {
    int units;
    double bill, surcharge;

    // Read number of units
    scanf("%d", &units);

    // Calculate bill based on unit slabs
    if (units <= 199) {
        bill = units * 1.20;
    } else if (units >= 200 && units < 400) {
        bill = units * 1.50;
    } else if (units >= 400 && units < 600) {
        bill = units * 1.80;
    } else { // units >= 600
        bill = units * 2.00;
    }

    // Calculate surcharge
    if (bill > 400) {
        surcharge = bill * 0.15;  // 15% surcharge
    } else {
        surcharge = 100;           // minimum surcharge
    }

    // Total amount
    bill += surcharge;

    // Print total amount with 2 decimal places
    printf("%.2lf
", bill);

    return 0;
}
