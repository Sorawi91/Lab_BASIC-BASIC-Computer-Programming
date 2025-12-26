#include <stdio.h>

// ประกาศฟังก์ชัน: รับค่าเป็น Pointer ทั้งหมดเพื่อเข้าไปแก้ไขค่าใน Memory โดยตรง
void Cases(int *Stocks, float *Fee, int *number, int *cmd, int *quantitys, float *totoal);

int main()
{
    int Stock;
    float PENALTY_FEE, totalPenalties = 0.0;
    int n, cmdCode, quantity;

    // รับค่าเริ่มต้น: สต็อก, ค่าปรับ, จำนวนคำสั่ง
    if (scanf("%d %f %d", &Stock, &PENALTY_FEE, &n) != 3) return 0;
    
    // เรียกฟังก์ชันเดียวจบ ส่ง Address ของตัวแปรทุกตัวไปทำงาน
    Cases(&Stock, &PENALTY_FEE, &n, &cmdCode, &quantity, &totalPenalties);
    
    return 0;
}

void Cases(int *Stocks, float *Fee, int *number, int *cmd, int *quantitys, float *totoal){
    
    // วนลูปทำตามจำนวนคำสั่งที่รับมา
    for (int i = 0; i < *number; i++)
    {
        // รับรหัสคำสั่งและจำนวนของ (ใส่ลงใน Pointer เลย)
        if (scanf("%d %d", cmd, quantitys) != 2) break;

        switch (*cmd)
        {
        case 1: 
        // รับของเข้า (Restock)
            *Stocks += *quantitys;
            printf("Received %d units.\n", *quantitys);
            break;

        case 2: 
        // ส่งของออก (Shipping)
            if (*quantitys <= 0) {
                printf("Error: Quantity must be positive.\n");
            } 
            else if (*quantitys <= *Stocks) {
                *Stocks -= *quantitys; 
                // ของพอ -> ตัดสต็อก
                printf("Shipped %d units.\n", *quantitys);
            } 
            else {
                *totoal += *Fee; 
                // ของไม่พอ -> โดนปรับ
                printf("FAILURE: Insufficent stock. PENALTY %.2f added.\n", *Fee);
            }
            break;

        case 3:
         // ดูรายงาน (Report)
            printf("Current Stock: %d\n", *Stocks);
            printf("Total Penalties: %.2f\n", *totoal);
            break;

        default:
            printf("Error invalid Command.\n");
            break;
        }
    }
}
