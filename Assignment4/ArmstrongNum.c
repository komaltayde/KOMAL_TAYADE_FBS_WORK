#include <stdio.h>

int main()
{
    int num = 153;
    int original = num;
    int digit, sum = 0;

    for (; num > 0; num = num / 10)                  // We don't need to initialize it again inside the for loop.
{                                                    
        digit = num % 10;                             //That's why we leave the first part empty but keep the semicolon.
        sum = sum + digit * digit * digit;            // A for loop always has two semicolons, even if one part is empty.
    
}
    if (original == sum)
    {
        printf("%d is Armstrong number", original);
    }
    else
    {
        printf("%d is not Armstrong number", original);
    }

    return 0;
} 
                                                     