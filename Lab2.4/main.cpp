#include <stdio.h>

int main () {
    float principal, monthlyPayment , interest;
    int monthCount = 0;
    const float INTEREST_RATE = 0.01;
    const float PENALTY = 10.0;
    
    printf("Fill principal and monthlyPayment: ");
    if (scanf("%f %f",&principal,&monthlyPayment) != 2) {
        printf("Plsese try again!\n");
        printf("----------------------------------------------------------");
        return 0;
    }

    while (principal > 0) {
        interest = principal * INTEREST_RATE; 
        principal = principal + interest; 

        if (monthlyPayment < interest ) {
            principal = principal + PENALTY;
        } 

        principal = principal - monthlyPayment;
        printf("Month [%d]: Remaining %.2f\n",monthCount+1,principal);
        monthCount++;

        if (monthCount > 10) {
            printf("Loan settled in 10+ months.");
            return 0;
        }
    } 
    printf("Loan settled in %d months",monthCount);
    
    return 0;
}