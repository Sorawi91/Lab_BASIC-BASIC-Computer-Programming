#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int data[ROWS][COLS];
    int i, j;

    // ส่วนการรับข้อมูล (Input)
    printf("Enter %d integer numbers for the 3x3 array:\n", ROWS * COLS);

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &data[i][j]);
        }
    }

    // ส่วนการแสดงผล (Report)
    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: %d Rows x %d Columns\n", ROWS, COLS);
    printf("Content (Table Format):\n");

    // ลูปแสดงผลเป็นตาราง
    for (i = 0; i < ROWS; i++) {        
        // Loop นอก: ควบคุมแถว (Row)
        for (j = 0; j < COLS; j++) {    
            // Loop ใน: ควบคุมคอลัมน์ (Column)
            printf("%d ", data[i][j]);  
            // ปริ้นตัวเลขตามด้วยช่องว่าง
        }
        printf("\n"); 
        // เมื่อจบ Loop ใน (ครบ 1 แถว) ให้ขึ้นบรรทัดใหม่
    }

    return 0;
}


