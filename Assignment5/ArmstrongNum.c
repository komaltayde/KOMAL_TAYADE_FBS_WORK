#include <stdio.h>

int main()
{
    int n = 1000;
    int num, temp, digit, sum, count, power, i;

    for (num = 1; num <= n; num++)
    {
        temp = num;
        count = 0;
        sum = 0;

        // Count digits
        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }

        temp = num;

        // Calculate Armstrong sum
        while (temp > 0)
        {
            digit = temp % 10;
            power = 1;

            for (i = 1; i <= count; i++)
            {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}