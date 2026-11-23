#include <stdio.h>

int main()
{
    int n = 23;
    int i = 1, sum = 0;

    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == n)
    {
        printf("Perfect");
    }
    else
    {
        printf("Not Perfect");
    }

    return 0;
}