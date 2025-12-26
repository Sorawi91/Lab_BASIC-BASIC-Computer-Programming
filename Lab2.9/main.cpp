#include <stdio.h>

void Cases(int *Stocks , float *Fee , int *number,int *cmd , int *quantitys,float *totoal);

int main()
{
    int Stock;
    float PENALTY_FEE;
    float totalPenalties = 0.0;
    int n, cmdCode, quantity;

    if (scanf("%d %f %d", &Stock, &PENALTY_FEE, &n) != 3)
    {
        return 0;
    }
    
    Cases(&Stock,&PENALTY_FEE,&n,&cmdCode,&quantity,&totalPenalties);
    return 0;
}

//ลดความซับซ้อนโดยการส่งค่า พารามิเตอร์เกือบทุกอย่างเพื่อให้มันประมวณผลใน fuunction เท่านั้นเลย
void Cases(int *Stocks , float *Fee , int *number,int *cmd , int *quantitys,float *totoal){
    
    for (int i = 0; i < *number; i++)
    {
        if (scanf("%d %d", &*cmd, &*quantitys) != 2)
        {
            break;
        }
        switch (*cmd)
        {
        case 1:
            *Stocks += *quantitys;
            printf("Received %d units.\n", *quantitys);
            break;

        case 2:
            if (*quantitys <= 0)
            {
                printf("Error: Quantity must be positive.\n");
            }
            else if (*quantitys <= *Stocks)
            {
                *Stocks -= *quantitys;
                printf("Shipped %d units.\n", *quantitys);
            }
            else
            {
                *totoal += *Fee;
                printf("FAILURE: Insufficent stock. PENALTY %.2f added.\n", *Fee);
            }
            break;

        case 3:
            printf("Current Stock: %d\n", *Stocks);
            printf("Total Penalties: %.2f\n", *totoal);
            break;

        default:
            printf("Error invalid Command.\n");
            break;
        }
    }
}
