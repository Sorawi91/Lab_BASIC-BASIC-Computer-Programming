#include <stdio.h>

int main()
{
    int dayCode, hour;

    printf("Please fill in two values (1.dayCode Monday(1) - Sunday(7) , 2.hour (0-23) : ");

    if (scanf("%d %d", &dayCode, &hour) != 2)
    {
        return 1;
    }

    if (dayCode == 6 || dayCode == 7)
    {
        printf("Weekend Relax Mode");
        return 1;
    }

    switch (dayCode)
    {
    case 1:
        if (dayCode == 1)
        {
            if (hour >= 8 && hour <= 17)
            {
                printf("System Running (Workday)");
            }
            else
            {
                printf("System Idle (Off-hours)");
            }
        }
        break;

    case 2:
        if (dayCode == 2)
        {
            if (hour >= 8 && hour <= 17)
            {
                printf("System Running (Workday)");
            }
            else
            {
                printf("System Idle (Off-hours)");
            }
        }
        break;

    case 3:
        if (dayCode == 3)
        {
            if (hour >= 8 && hour <= 17)
            {
                printf("System Running (Workday)");
            }
            else
            {
                printf("System Idle (Off-hours)");
            }
        }
        break;

    case 4:
        if (dayCode == 4)
        {
            if (hour >= 8 && hour <= 17)
            {
                printf("System Running (Workday)");
            }
            else
            {
                printf("System Idle (Off-hours)");
            }
        }
        break;

    case 5:
        if (dayCode == 5)
        {
            if (hour >= 8 && hour <= 17)
            {
                printf("System Running (Workday)");
            }
            else
            {
                printf("System Idle (Off-hours)");
            }
        }
        break;

    default:
        printf("Invalid Day Code");
        break;
    }

    return 0;
}