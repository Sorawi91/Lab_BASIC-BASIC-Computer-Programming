#include <stdio.h>

void caculator (int *number, float *unitprice, int *quantity, float *totolcost, float *grandTotal);

int main () {
    int n, qtt;
    float up, tc, gt = 0.0;

    printf("Plsese Fill How many unit you buy: ");
    if (scanf("%d", &n) != 1) {
        printf("Error Plsese try again.");
        return 1;
    }
    caculator(&n, &up, &qtt, &tc, &gt);
    printf("Grand Total: %.2f\n", gt);
}

void caculator(int *number, float *unitprice, int *quantity, float *totolcost, float *grandTotal) {
    for (int i = 0; i < *number; i++) {
        printf("Plsese Fill unitprice and quantity [%d]: ", i + 1);
        scanf("%f %d", unitprice, quantity);

        if (*unitprice >= 1000.00) {
            *totolcost = (*unitprice * *quantity) * 0.90;
        } else {
            *totolcost = *unitprice * *quantity;
        }
        *grandTotal += *totolcost;
    }
}
