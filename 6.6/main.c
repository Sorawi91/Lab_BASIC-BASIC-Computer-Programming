#include <stdio.h>

#define SIZE 5

void calculate_net_balance(int *trans_array, int *balane, int *status_ptr);

int main() {
    int transactions[SIZE];
    int net_balance;
    int finance_status; 
    int i;

    
    printf("Enter %d transactions (Income +, Expense -):\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Transaction %d: ", i + 1);
        scanf("%d", &transactions[i]);
    }

    
    calculate_net_balance(transactions,&net_balance,&finance_status);
    
    printf("\n--- PERSONAL FINANCE REPORT ---\n");
    printf("Transactions Recorded: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", transactions[i]);
    }
    printf("\n");
    printf("Net Balance: %d\n", net_balance);
    if (finance_status == 1) {
        printf("Status: PROFIT");
    } else {
        printf("Status: LOSS");
    }
    

    return 0;
}



void calculate_net_balance(int *trans_array,int *balane, int *status_ptr){
    for (int i = 0 ; i < SIZE ; i++) {
        *balane = *balane + trans_array[i];
    }

    if (*balane < 0) {
        *status_ptr = 0;
    } else {
        *status_ptr = 1;
    }
}