#include <stdio.h>

/* ฟังก์ชันรับของเข้า */
void receiveStock(int *stock, int quantity)
{
    *stock = *stock + quantity;
    printf("Received %d units.\n", quantity);
}

/* ฟังก์ชันส่งของออก */
void shipStock(int *stock, int quantity, float penaltyFee, float *totalPenalty)
{
    if (quantity <= 0)
    {
        printf("Error: Quantity must be positive.\n");
    }
    else if (quantity <= *stock)
    {
        *stock = *stock - quantity;
        printf("Shipped %d units.\n", quantity);
    }
    else
    {
        /* เพิ่มค่าปรับเมื่อของในสต็อกไม่พอ */
        *totalPenalty = *totalPenalty + penaltyFee;
        printf(
            "FAILURE: Insufficient stock. PENALTY %.2f added.\n",
            penaltyFee
        );
    }
}

/* ฟังก์ชันรายงานผล */
void reportStatus(int stock, float totalPenalty)
{
    printf("Current Stock: %d\n", stock);
    printf("Total Penalties: %.2f\n", totalPenalty);
}

int main()
{
    int stock;
    int commandCount;
    float penaltyFee;
    float totalPenalty = 0.0;

    int command;
    int quantity;

    /* รับค่าเริ่มต้น */
    if (scanf("%d %f %d", &stock, &penaltyFee, &commandCount) != 3)
    {
        return 0;
    }

    /* วนลูปรับคำสั่ง */
    for (int i = 0; i < commandCount; i++)
    {
        if (scanf("%d %d", &command, &quantity) != 2)
        {
            break;
        }

        if (command == 1)
        {
            receiveStock(&stock, quantity);
        }
        else if (command == 2)
        {
            shipStock(&stock, quantity, penaltyFee, &totalPenalty);
        }
        else if (command == 3)
        {
            reportStatus(stock, totalPenalty);
        }
        else
        {
            printf("Error: Invalid command.\n");
        }
    }

    return 0;
}
