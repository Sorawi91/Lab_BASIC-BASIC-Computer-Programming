#include <stdio.h>

void handleDeposit(float *balance, float amount);
void handleWithdrawal(float *balance, float amount, float penaltyFee, float *totalPenalties);
void applyInterest(float *balance);

int main()
{
    float initialBalance = 0.00;
    float currentBalance = 0.00;
    float penaltyFee = 0.00;
    int n, i, cmdCode;
    float amount = 0.00;
    float totalPenalties = 0.00;

    // รับค่าเริ่มต้น
    if (scanf("%f %f %d", &initialBalance, &penaltyFee, &n) != 3)
    {
        return 0;
    }

    currentBalance = initialBalance;
    printf("Starting Balance: %.2f\n", initialBalance);

    for (i = 0; i < n; i++)
    {
        if (scanf("%d %f", &cmdCode, &amount) != 2)
        {
            break;
        }

        printf("--- Month %d ---\n", i + 1);
     
        switch (cmdCode)
        {
        case 1:
            handleDeposit(&currentBalance, amount);
            break;

        case 2:
            handleWithdrawal(&currentBalance, amount, penaltyFee, &totalPenalties);
            break;

        case 3:
            applyInterest(&currentBalance);
            break;

        default:
            printf("Error: Invalid Command.\n");
            break;
        }
    }

    printf("Final Balance: %.2f\n", currentBalance);
    printf("Total Penalties: %.2f\n", totalPenalties);

    return 0;
}

void handleDeposit(float *balance, float amount)
{
    *balance += amount; 
    printf("Deposit: %.2f\n", amount);
}

void handleWithdrawal(float *balance, float amount, float penaltyFee, float *totalPenalties)
{
    if (amount <= *balance)
    {
        *balance -= amount;
        printf("Withdrawal: %.2f\n", amount);
    }
    else
    {
        *totalPenalties += penaltyFee;
        printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", penaltyFee);
    }
}

void applyInterest(float *balance)
{
    float apr = 0.00;
    float interest = 0.00;

    if (*balance < 1000.00)
    {
        apr = 1.0;
    }
    else
    {
        apr = 2.5;
    }

    interest = *balance * (apr / 100.0) / 12.0;
    
    *balance += interest;

    printf("Interest: %.2f (Rate: %.2f%%)\n", interest, apr);
}
