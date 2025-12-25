#include <stdio.h>
#define MONTHS 3

void analyze_profitability(int *rev_ptr, int *exp_ptr, int *status_ptr,int *net);

void get_monthly_data(int array[], int size, const char *type);

void print_monthly_data(int array[], int size, const char *type);

int main() {
    int monthly_revenue[MONTHS];
    int monthly_expense[MONTHS];
    int net_profit = 0;
    int business_status = 0; 

    
    get_monthly_data(monthly_revenue, MONTHS, "REVENUE");
    get_monthly_data(monthly_expense, MONTHS, "EXPENSE");
    
  analyze_profitability(monthly_revenue,monthly_expense,&business_status, &net_profit);


    printf("\n--- 3 MONTH FINANCIAL ANALYSIS REPORT ---\n");
    print_monthly_data(monthly_revenue, MONTHS, "REVENUE");
    print_monthly_data(monthly_expense, MONTHS, "EXPENSE");
    
  
    printf("\nNET PROFIT: %d\n", net_profit);
    printf("BUSINESS STATUS: ");
    if (business_status == 1) {
        printf("PROJECT IS PROFITABLE");
    } else {
        printf("PROJECT IS UNPROFITABLE");
    }
    
    return 0;
}


void get_monthly_data(int array[], int size, const char *type) {
    printf("\nEnter %d months of %s values:\n", size, type);
    for (int i = 0; i < size; i++) {
        printf("Month %d %s: ", i + 1, type);
        scanf("%d", &array[i]);
    }
}

void print_monthly_data(int array[], int size, const char *type) {
    long total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    printf("TOTAL %s: %ld\n", type, total);
}

void analyze_profitability(int *rev_ptr, int *exp_ptr, int *status_ptr,int *net){
    for (int i = 0 ; i < MONTHS ; i++) {

        *net += rev_ptr[i] - exp_ptr[i];
    }

    if (*net >= 0) {
        *status_ptr = 1;
    }
}