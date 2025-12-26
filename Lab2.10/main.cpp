#include <stdio.h>

// ประกาศฟังก์ชัน
void handleDeposit(float *balance, float amount);
void handleWithdrawal(float *balance, float amount, float penaltyFee, float *totalPenalties);
void applyInterest(float *balance);

int main()
{
    float initialBalance = 0.00, currentBalance = 0.00, penaltyFee = 0.00;
    float amount = 0.00, totalPenalties = 0.00;
    int n, i, cmdCode;

    // รับค่าเริ่มต้น (เงินต้น, ค่าปรับ, จำนวนรายการ)
    if (scanf("%f %f %d", &initialBalance, &penaltyFee, &n) != 3) return 0;

    currentBalance = initialBalance;
    printf("Starting Balance: %.2f\n", initialBalance);

    for (i = 0; i < n; i++)
    {
        // รับคำสั่งและจำนวนเงิน
        if (scanf("%d %f", &cmdCode, &amount) != 2) break;

        printf("--- Month %d ---\n", i + 1);
      
        switch (cmdCode)
        {
        case 1: // ฝากเงิน
            handleDeposit(&currentBalance, amount);
            break;
        case 2: // ถอนเงิน
            handleWithdrawal(&currentBalance, amount, penaltyFee, &totalPenalties);
            break;
        case 3: // คิดดอกเบี้ย
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

// ฟังก์ชันฝากเงิน
void handleDeposit(float *balance, float amount)
{
    *balance += amount; 
    printf("Deposit: %.2f\n", amount);
}

// ฟังก์ชันถอนเงิน
void handleWithdrawal(float *balance, float amount, float penaltyFee, float *totalPenalties)
{
    if (amount <= *balance)
    {
        *balance -= amount; // เงินพอให้ถอน
        printf("Withdrawal: %.2f\n", amount);
    }
    else
    {
        *totalPenalties += penaltyFee; // เงินไม่พอ บวกค่าปรับ
        printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", penaltyFee);
    }
}

// ฟังก์ชันคิดดอกเบี้ย
void applyInterest(float *balance)
{
    float apr, interest;

    // เช็คเรทดอกเบี้ยตามยอดเงิน (น้อยกว่า 1000 ได้ 1%, มากกว่าได้ 2.5%)
    if (*balance < 1000.00) apr = 1.0;
    else apr = 2.5;

    interest = *balance * (apr / 100.0) / 12.0;
    *balance += interest; // บวกดอกเบี้ยเข้าบัญชี

    printf("Interest: %.2f (Rate: %.2f%%)\n", interest, apr);
}
