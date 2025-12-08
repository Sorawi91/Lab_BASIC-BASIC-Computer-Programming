#include <stdio.h>

int main() {
    int N_MONTHS;
    int successCount = 0;
    float monthlyTotal;
    float currentDeposit;

    if (scanf("%d", &N_MONTHS) != 1) {
        return 1;
    }

    for (int i = 0; i < N_MONTHS; i++) {
        monthlyTotal = 0.0;

        while (1) {
            if (scanf("%f", &currentDeposit) != 1) {
                return 1;
            }

            if (currentDeposit == 0.00) {
                break;
            }

            monthlyTotal += currentDeposit;
        }

        printf("Month %d Total: %.2f\n", i + 1, monthlyTotal);

        if (monthlyTotal >= 500.00) {
            successCount++;
        }
    }

    printf("Success Count: %d\n", successCount);

    return 0;
}
