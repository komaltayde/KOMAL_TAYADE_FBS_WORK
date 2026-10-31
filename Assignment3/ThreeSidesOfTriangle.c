#include <stdio.h>

int main()
{
    int a = 5, b = 5, c = 5;

    if (a == b)
    {
        if (b == c)
            printf("Equilateral triangle");
        else
            printf("Isosceles triangle");
    }
    else
    {
        if (a == c)
            printf("Isosceles triangle");
        else if (b == c)
            printf("Isosceles triangle");
        else
            printf("Scalene triangle");
    }

    return 0;
}