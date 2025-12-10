#include <stdio.h>

int main() {
    int eng, maths, phy, chem, cs;

    // Input marks of 5 subjects
    scanf("%d %d %d %d %d", &eng, &maths, &phy, &chem, &cs);

    // Checking all subjects
    if (eng > 34 && maths > 34 && phy > 34 && chem > 34 && cs > 34)
        printf("PASSED");
    else
        printf("FAILED");

    return 0;
}
