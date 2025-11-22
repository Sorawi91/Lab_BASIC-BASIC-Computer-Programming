#include <stdio.h>

int main()
{
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;
    float Cost;

    printf("Input 1.zoneCode , 2.weight_kg: \n");
    printf("Zone Code: 1=Local, 2=Regional, 3=International : ");

    if (scanf("%d %f", &zoneCode, &weight_kg) != 2)
    {
        return 1;
    }

    if (zoneCode <= 0 || zoneCode > 3)
    {
        printf("Invalid Zone Code");
        return 1;
    }

    switch (zoneCode)
    {
    case 1:

        if (weight_kg > 5)
        {
            Cost = 80;
        }
        else if (weight_kg <= 5)
        {
            Cost = 50;
        }

        break;
    case 2:

        if (weight_kg > 10)
        {
            Cost = 250;
        }
        else if (weight_kg <= 10)
        {
            Cost = 150;
        }

        break;
    case 3:

        Cost = 500;

        break;

    default:
        break;
    }

    totalCost = Cost;

    if (totalCost > 0.0 || zoneCode > 3 || zoneCode < 1)
    {
        printf("%.2f\n", totalCost);
    }

    return 0;
}