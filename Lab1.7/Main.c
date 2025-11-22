#include <stdio.h>

int main() {
    int customerType;
    float consumption_kWh;
    float totalBill = 0.0;
    float kWh = 0;
    
    printf("Enter customer type (1 for family, 2 for business) and consumption in kWh: ");

    if (scanf("%d %f", &customerType, &consumption_kWh) != 2) {
        return 1; 
    }

    if (customerType == 3){
        printf("Invalid Customer Type");
        return 1;
    }

    if (customerType == 1){
        if (consumption_kWh >= 100){
            kWh = 4.0;
        } else if (consumption_kWh >= 0){
            kWh = 3.0;
        }
        
    } 

    if (customerType == 2){
        if (consumption_kWh >= 500){
            kWh = 6.5;
        } else if (consumption_kWh >= 0){
            kWh = 3.0;
        }
    
    } 
    
    totalBill = consumption_kWh * kWh;

    if (totalBill > 0.0) { 
        printf("%.2f\n", totalBill);
    } 

    return 0;
}