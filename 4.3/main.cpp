#include <stdio.h>

int main()
{
    int max_temp;
    int i, temp;
    int DAYS = 7;

    int daily_temp[DAYS];

    for (i = 0; i < DAYS; i++)
    {
        printf("Enter temperature for Day %d: ", i + 1);
        scanf("%d", &daily_temp[i]);
    }

    for (i = 0; i < DAYS; i++)
    {
        if (daily_temp[i] > max_temp)
        {
            max_temp = daily_temp[i];
        }
    }

    printf("\n--- DAILY TEMPERATURE REPORT ---\n");
    printf("Recorded Temperatures (C): ");

    for (i = 0; i < DAYS; i++)
    {
        printf("%d ", daily_temp[i]);
    }

    printf("\n");
    printf("Maximum Temperature Found: %d C\n", max_temp);

    if (max_temp > 35)
    {
        printf("Weather is HOT!");
    }
    else
    {
        printf("Weather is MODERATE.");
    }

    return 0;
}
