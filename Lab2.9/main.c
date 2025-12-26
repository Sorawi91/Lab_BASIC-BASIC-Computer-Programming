#include <stdio.h>

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

        /* คำสั่งรับของเข้า */
        if (command == 1)
        {
            stock = stock + quantity;
            printf("Received %d units.\n", quantity);
        }

        /* คำสั่งส่งของออก */
        else if (command == 2)
        {
            if (quantity <= 0)
            {
                printf("Error: Quantity must be positive.\n");
            }
            else if (quantity <= stock)
            {
                stock = stock - quantity;
                printf("Shipped %d units.\n", quantity);
            }
            else
            {
                totalPenalty = totalPenalty + penaltyFee;
                printf(
                    "FAILURE: Insufficient stock. PENALTY %.2f added.\n",
                    penaltyFee
                );
            }
        }

        /* คำสั่งรายงานผล */
        else if (command == 3)
        {
            printf("Current Stock: %d\n", stock);
            printf("Total Penalties: %.2f\n", totalPenalty);
        }

        /* คำสั่งไม่ถูกต้อง */
        else
        {
            printf("Error: Invalid command.\n");
        }
    }

    return 0;
}
