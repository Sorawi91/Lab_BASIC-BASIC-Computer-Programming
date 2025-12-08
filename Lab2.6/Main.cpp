#include <stdio.h>

void money(int *N, int *n, int *s, float *dD, float *mT, float *cD);

int main()
{
    int N_MONTHS, month, successCount = 0;
    float dailyDeposit, monthlyTotal, currentDeposit;

    if (scanf("%d", &N_MONTHS) != 1)
    {
        return 1;
    }

    money(&N_MONTHS, &month, &successCount, &dailyDeposit, &monthlyTotal, &currentDeposit);

    printf("Success Count: %d\n", successCount);

    return 0;
}

void money(int *NM, int *m, int *s, float *dD, float *mT, float *cD)
{

    for (int i = 0; i < *NM; i++)
    {
        *mT = 0.0;

        while (1)
        {
            if (scanf("%f", &*cD) != 1)
            {
                return;
            }

            if (*cD == 0.00)
            { // ถ้าเจอ 0.00 ให้หยุด loop ข้างในเเละออกไป for นอก
                break;
            }

            *mT = *mT + *cD;
        }

        printf("Month %d Total: %.2f\n", i + 1, *mT);

        if (*mT >= 500.00)
        {
            (*s)++;
        }
    }
}
