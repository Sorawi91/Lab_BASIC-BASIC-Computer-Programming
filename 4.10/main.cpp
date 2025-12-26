#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int data[ROWS][COLS];
    int i, j;

    printf("Enter %d integer numbers for the 3x3 array:\n", ROWS * COLS);

    // 1. Nested Loop สำหรับรับค่า
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Enter element for Row %d, Col %d: ", i, j);
            
            // แก้ไข CLO3: แยกบรรทัดและใส่ปีกกาให้ชัดเจน
            if (scanf("%d", &data[i][j]) != 1) 
            {
                return 1;
            }
        }
    }

    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: %d Rows x %d Columns\n", ROWS, COLS);
    printf("Content (Table Format):\n");

    // 2. Nested Loop สำหรับแสดงผลเป็นตาราง
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("\n"); 
        // ขึ้นบรรทัดใหม่เมื่อจบแต่ละแถว (Row)
    }
    return 0;
}
