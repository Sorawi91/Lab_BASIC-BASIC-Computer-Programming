#include <stdio.h>

int main (){
    int Stock;
    float PENALTY_FEE;
    float totalPenalties = 0.0;
    int n,i,cmdCode,quantity;

    if (scanf("%d %f %d",&Stock,&PENALTY_FEE,&n) != 3) {
        return 0;
    }
    

    for (i = 0 ; i < n ; i++) {
        if (scanf("%d %d",&cmdCode,&quantity) != 2) {
            return 0;
        }
            switch (cmdCode) {
                case 1: //รับสินค้าเข้า
                    Stock += quantity; 
                    printf("Received %d units.\n",quantity);
                break;

                case 2: //เบิกสินค้าออก
                    if (quantity <= 0) {
                        printf("Error: Quantity must be positive.\n");
                    } else if (quantity <= Stock) {
                        Stock -= quantity; // อัปเดต stock จริง
                        printf("Shipped %d units.\n",quantity);
                    } else {
                        totalPenalties += PENALTY_FEE;
                        printf("FAILURE: Insufficent stock. PENALTY %.2f added.\n",PENALTY_FEE);
                    }
                break;

                case 3: //ตรวจสอบสภานะ
                        printf("Current Stock: %d\n", Stock);
                        printf("Total Penalties: %.2f\n", totalPenalties);
                break;

                default :
                    printf("Error invalid Command.\n");
                break;
        }
    }
    return 0;
}