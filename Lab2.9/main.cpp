#include <stdio.h>

// ประกาศฟังก์ชัน (Prototype)
void Cases(int *Stocks, float *Fee, int *number, int *cmd, int *quantitys, float *total);

int main()
{
    int Stock;
    float PENALTY_FEE, totalPenalties = 0.0;
    int n, cmdCode, quantity;

    // รับค่าเริ่มต้น (แยกบรรทัด return เพื่อแก้ CLO3)
    if (scanf("%d %f %d", &Stock, &PENALTY_FEE, &n) != 3) 
    {
        return 0;
    }
    
    // เรียกใช้ฟังก์ชัน Cases
    Cases(&Stock, &PENALTY_FEE, &n, &cmdCode, &quantity, &totalPenalties);
    
    return 0;
}

void Cases(int *Stocks, float *Fee, int *number, int *cmd, int *quantitys, float *total){
    
    // วนลูปทำงานตามจำนวนคำสั่ง
    for (int i = 0; i < *number; i++)
    {
        // รับรหัสคำสั่งและจำนวน (แยกบรรทัด break เพื่อแก้ CLO3)
        if (scanf("%d %d", cmd, quantitys) != 2) 
        {
            break;
        }

        switch (*cmd)
        {
        case 1: 
            // รับสินค้าเข้า
            *Stocks += *quantitys;
            printf("Received %d units.\n", *quantitys);
            break;

        case 2: 
            // เบิกสินค้าออก
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
                *total += *Fee; 
                printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", *Fee);
            }
            break;

        case 3:
            // ตรวจสอบสถานะ
            printf("Current Stock: %d\n", *Stocks);
            printf("Total Penalties: %.2f\n", *total);
            break;

        default: 
            // คำสั่งผิด
            printf("Error: Invalid Command.\n");
            break;
        }
    }
}
