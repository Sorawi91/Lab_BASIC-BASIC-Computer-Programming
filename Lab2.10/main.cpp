#include <stdio.h>

// ฟังก์ชันฝากเงิน (Case 1)
// รับค่า pointer ของ balance เพื่อให้อัปเดตค่าจริงได้
void handleDeposit(float *balance, float amount) {
    *balance += amount;
    printf("Deposit: %.2f\n", amount);
}

// ฟังก์ชันถอนเงิน (Case 2)
// รับ pointer ของ balance และ totalPenalties เพื่ออัปเดตค่า
void handleWithdraw(float *balance, float amount, float penaltyFee, float *totalPenalties) {
    if (amount <= *balance) {
        *balance -= amount;
        printf("Withdrawal: %.2f\n", amount);
    } else {
        *totalPenalties += penaltyFee;
        printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", penaltyFee);
    }
}

// ฟังก์ชันคำนวณดอกเบี้ย (Case 3)
void handleInterest(float *balance) {
    float apr;
    float interest;

    if (*balance < 1000.00) {
        apr = 1.0;
    } else {
        apr = 2.5;
    }

    // สูตรดอกเบี้ย: เงินต้น * (APR/100) / 12 เดือน
    interest = *balance * (apr / 100.0) / 12.0;
    *balance += interest;

    printf("Interset: %.2f (Rate: %.2f%%)\n", interest, apr);
}

int main() {
    // แก้ไข CLO3: แยกประกาศตัวแปรคนละบรรทัด
    float initialBalance = 0.00;
    float currentBalance = 0.00;
    float PENALTY_FEE = 0.00;
    float amount = 0.00;
    float totalPenalties = 0.00;
    
    // ตัวแปร Loop และ Input
    int N;
    int i;
    int cmdCode;

    // รับค่าตั้งต้น
    if (scanf("%f %f %d", &initialBalance, &PENALTY_FEE, &N) != 3) {
        return 0;
    }

    currentBalance = initialBalance;
    printf("Starting Balance: %.2f\n", initialBalance);

    for (i = 0; i < N; i++) {
        if (scanf("%d %f", &cmdCode, &amount) != 2) {
            break;
        }

        printf("--- Month %d ---\n", i + 1);

        // แก้ไข CLO4: เรียกใช้ฟังก์ชันแทนการเขียน Logic ยาวๆ ใน switch
        switch (cmdCode) {
            case 1: // ฝากเงิน
                handleDeposit(&currentBalance, amount);
                break;

            case 2: // ถอนเงิน
                handleWithdraw(&currentBalance, amount, PENALTY_FEE, &totalPenalties);
                break;

            case 3: // คิดดอกเบี้ย
                // ส่ง address ของ currentBalance ไปคำนวณ
                handleInterest(&currentBalance);
                break;

            default: // Error
                printf("Error: Invalid Command.\n");
                break;
        }
    }

    printf("Final Balance: %.2f\n", currentBalance);
    printf("Total Penalties: %.2f\n", totalPenalties);

    return 0;
}
