#include <stdio.h>

int main()
{

    int categoryCode;
    float price_before_vat;
    float Total_Price = 0.0;
    float Vatamount = 0.0;
    float VATAmount = 0.0;

    printf("Please fill  1.Pirce_Before_vat , 2.CategoryCode : ");

    if (scanf("%f %d", &price_before_vat, &categoryCode) != 2)
    {
        return 1;
    }

    switch (categoryCode)
    {
    case 1:
        Total_Price = price_before_vat * 1.07;
        break;
    case 2:
        Total_Price = price_before_vat;
        break;
    case 3:
        Total_Price = price_before_vat * 1.15;
        break;

    default:
        Total_Price = 0.00;
        printf("Invalid Category Total_Price = %.2f ", Total_Price);
        break;
    }

    if (categoryCode >= 1 && categoryCode <= 3)
    {
        VATAmount = Total_Price - price_before_vat;

        printf("VAT Amount: %.2f\n", VATAmount);
        printf("Total Price: %.2f\n", Total_Price);
    }
}