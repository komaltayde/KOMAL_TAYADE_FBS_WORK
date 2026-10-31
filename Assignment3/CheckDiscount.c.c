#include <stdio.h>

int main()
{
    float price = 700, discount, finalPrice;
    char student = 'y';

    if (student == 'n' || student == 'Y')
    {
        if (price > 500)
        {
            discount = price * 0.20;
        }
        else
        {
            discount = price * 0.10;
        }
    }
    else
    {
        if (price > 600)
        {
            discount = price * 0.15;
        }
        else
        {
            discount = 0;
        }
    }

    finalPrice = price - discount;

    printf("Purchase price: %.2f\n", price);
    printf("Discount: %.2f\n", discount);
    printf("Final price: %.2f\n", finalPrice);

    return 0;
}
