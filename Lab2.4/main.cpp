#include <stdio.h>

int main () {
    float principal, monthlyPayment , interest , ratepermount = 0.01 , fine = 10.00;
    int monthCount = 0;
    
    printf("Fill principal and monthlyPayment: ");
    if (scanf("%f %f",&principal,&monthlyPayment) != 2) {
        printf("Plsese try again!\n");
        printf("----------------------------------------------------------");
        return 1;
    }

    while (principal > 0) {
        interest = principal * ratepermount; //คำนวนดอกเบี้ย
        principal = principal + interest; // เพิ่มยอดหนี้

        if (monthlyPayment < interest ) {
            principal = principal + fine; //ถ้าเงินจ่ายต่อเดือนน้อยกว่าค่าดอกเบี้ยให้เพิ่มค่าปรับ 10 บาท
        } 

        principal = principal - monthlyPayment; //คำนวนหายอดสุทธิ
        printf("Month [%d]: Remaining %.2f\n",monthCount+1,principal);
        monthCount++;

        if (monthCount > 10) {
            printf("Loan settled in 10+ months.");
            return 1;
        }
    } 
    printf("Loan settled in %d months",monthCount);
}
