#include <stdio.h>

int main()
{
    int minutes = 135;
    int hours = minutes / 60;
    int remaining = minutes % 60;

    printf("Hours = %d\n", hours);
    printf("Remaining minutes = %d", remaining);

    return 0;
}