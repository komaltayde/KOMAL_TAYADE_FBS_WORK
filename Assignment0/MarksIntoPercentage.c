#include <stdio.h>

int main()
{
    int a = 80, b = 75, c = 90, d = 85, e = 70;
    int total;
    float percentage;

    total = a + b + c + d + e;
    percentage = (total / 500.0) * 100;

    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}