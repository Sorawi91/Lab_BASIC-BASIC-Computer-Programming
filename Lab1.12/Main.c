#include <stdio.h>

int main(){

    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    float Basic_rate =0.0;

    printf("Plsese Fill 1.PlanCode(1.Basic Plan , 2.Premium Plan) 2.dataUsage_GB: ");

    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2){
        return 1;
    }

    if (planCode == 1) {
        Basic_rate = 299;
        if (dataUsage_GB <= 10) {
            totalBill = Basic_rate;
        } else if (dataUsage_GB > 10) {
            totalBill = 299 + 10 * (dataUsage_GB - 10);
        }
    }

    if (planCode == 2){
        Basic_rate = 599;
        if (dataUsage_GB <= 20) {
            totalBill = Basic_rate;
        } else if (dataUsage_GB > 20) {
            totalBill = 599 + 50 + 5 * (dataUsage_GB - 20);
        }
    }

    if (planCode == 1 || planCode == 2) {
        printf("%.2f\n" , totalBill);
    } else {
        printf("Invalid Plan Code\n");
    }
    return 0;
}