#include <stdio.h>

void table(int num);

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    table(num);

    return 0;
}

void table(int num)
{
    int i = 1, result;

    while(i <= 10)
    {
        result = i * num;
        printf("%d\n", result);
        i++;
    }
}