#include <stdio.h>

int main() {

    float balance;
    float penaltyFee;
    float totalPenalty = 0.0;
    float amount;

    int N;
    int cmd;
    int i;

    /* รับค่าเริ่มต้น */
    if (scanf("%f %f %d", &balance, &penaltyFee, &N) != 3) {
        return 0;
    }

    printf("Starting Balance: %.2f\n", balance);

    for (i = 0; i < N; i++) {

        if (scanf("%d %f", &cmd, &amount) != 2) {
            break;
        }

        printf("--- Month %d ---\n", i + 1);

        if (cmd == 1) {
            /* ฝากเงิน */
            balance = balance + amount;
            printf("Deposit: %.2f\n", amount);
        }
        else if (cmd == 2) {
            /* ถอนเงิน */
            if (amount <= balance) {
                balance = balance - amount;
                printf("Withdrawal: %.2f\n", amount);
            } else {
                totalPenalty = totalPenalty + penaltyFee;
                printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", penaltyFee);
            }
        }
        else if (cmd == 3) {
            /* คิดดอกเบี้ย */
            float rate;
            float interest;

            if (balance < 1000.0) {
                rate = 1.0;
            } else {
                rate = 2.5;
            }

            interest = balance * rate / 100.0 / 12.0;
            balance = balance + interest;

            printf("Interest: %.2f (Rate %.2f%%)\n", interest, rate);
        }
        else {
            printf("Error: Invalid Command.\n");
        }
    }

    printf("Final Balance: %.2f\n", balance);
    printf("Total Penalties: %.2f\n", totalPenalty);

    return 0;
}
