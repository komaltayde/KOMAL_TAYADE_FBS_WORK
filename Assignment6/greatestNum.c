#include <stdio.h>

int greatestNum();

int main()
{
  greatestNum();  
}
int greatestNum(){

 int a = 10, b = 20, c = 15;

    if (a > b)
    {
        if (a > c)
            printf("A is greatest");
        else
            printf("C is greatest");
    }
    else
    {
        if (b > c)
            printf("B is greatest");
        else
            printf("C is greatest");
    }

    return 0;
}