#include <stdio.h>

int main()
{
    int stock;
    float penalty;
    float totalPenalty = 0.0;
    int n, i, cmd, qty;

    if (scanf("%d %f %d", &stock, &penalty, &n) != 3)
    {
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        if (scanf("%d %d", &cmd, &qty) != 2)
        {
            return 0;
        }

        switch (cmd)
        {
        case 1:
            // รับของเข้า
            stock = stock + qty;
            printf("Received %d units.\n", qty);
            break;

        case 2:
            // เอาของออก
            if (qty <= 0)
            {
                printf("Error: Quantity must be positive.\n");
            }
            else if (qty <= stock)
            {
                stock = stock - qty;
                printf("Shipped %d units.\n", qty);
            }
            else
            {
                totalPenalty = totalPenalty + penalty;
                printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", penalty);
            }
            break;

        case 3:
            printf("Current Stock: %d\n", stock);
            printf("Total Penalties: %.2f\n", totalPenalty);
            break;

        default:
            printf("Error invalid command.\n");
            break;
        }
    }

    return 0;
}
