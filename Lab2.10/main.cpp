#include <stdio.h>

int main () {
    float initialBalance = 0.00;
    float currentBalance = 0.00;
    float PENALTY_FEE = 0.00;
    int N,i,cmdCode;
    float amount = 0.00;
    float totalPenalties = 0.00;
    float Interest = 0.00;
    float APR = 0.00;

    if (scanf("%f %f %d",&initialBalance,&PENALTY_FEE,&N) != 3){
        return 0;
    }

    currentBalance = initialBalance;

    printf("Starting Balance: %.2f\n",initialBalance);
    
    for (i = 0 ; i < N ; i++) {
        if (scanf("%d %f",&cmdCode,&amount) != 2) {
            break;
        } 

        printf("--- Month %d ---\n",i+1);

        switch (cmdCode) {
            case 1: //ฝากเงิน
                currentBalance += amount;
                printf("Deposit: %.2f\n",amount);
            break;

            case 2: //ถอนเงิน
                if (amount <= currentBalance) {
                    currentBalance -= amount;
                    printf("Withdrawal: %.2f\n",amount);
                } else {
                    totalPenalties += PENALTY_FEE;
                    printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n",PENALTY_FEE);
                }
            break;

            case 3: //คิดดอกเบี้ย
                if (currentBalance < 1000.00) {
                    APR = 1.0;
                } else {
                    APR = 2.5;
                }

                Interest = currentBalance * (APR / 100.0) / 12.0;
                currentBalance += Interest;

                // แก้ไขคำผิด: Interset -> Interest
                printf("Interest: %.2f (Rate: %.2f%%)\n",Interest,APR);
            break;

            default: //Error
                printf("Error: Invalid Command.\n");
            break;
        }
        
    }
    printf("Final Balance: %.2f\n",currentBalance);
    printf("Total Penalties: %.2f\n",totalPenalties);
    return 0;

}
