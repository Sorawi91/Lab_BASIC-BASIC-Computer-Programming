#include <stdio.h>

// ประกาศ Prototype ฟังก์ชันไว้ก่อน เพื่อให้โครงสร้าง main ดูสะอาด
void input_matrix(int rows, int cols, int matrix[rows][cols], char name);
void transpose_matrix(int rows, int cols, int src[rows][cols], int dest[cols][rows]);
void multiply_matrices(int rA, int cA, int cB, int A[rA][cA], int B[cA][cB], int C[rA][cB]);
void print_matrix(int rows, int cols, int matrix[rows][cols]);

int main()
{
    // กำหนดขนาด Matrix (ใช้ตัวแปรเพื่อลด Hardcode)
    int R = 2, C = 3; 

    // ประกาศ Array สำหรับเก็บข้อมูล
    int A[R][C];
    int B[R][C];
    int BT[C][R]; // Transpose แล้วขนาดจะสลับกัน (จาก 2x3 เป็น 3x2)
    int Result[R][R]; // ผลลัพธ์จากการคูณ (2x3) * (3x2) จะได้ 2x2

    // 1. รับค่า Input (แยกฟังก์ชันเพื่อลดความซ้ำซ้อน)
    input_matrix(R, C, A, 'A');
    input_matrix(R, C, B, 'B');

    // 2. กลับด้าน Matrix B (Transpose)
    // เหตุผล: การคูณ Matrix ต้องใช้ "แถวคูณหลัก" การกลับด้าน B ก่อนช่วยให้ Loop ง่ายขึ้น
    transpose_matrix(R, C, B, BT);

    // 3. คำนวณการคูณ Matrix A x BT
    multiply_matrices(R, C, R, A, BT, Result);

    // 4. แสดงผลลัพธ์ (Report)
    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n");
    
    printf("\nMatrix A (%dx%d):\n", R, C);
    print_matrix(R, C, A);

    printf("\nMatrix B Transposed (%dx%d):\n", C, R);
    print_matrix(C, R, BT);

    printf("\nResult Matrix C (%dx%d):\n", R, R);
    print_matrix(R, R, Result);

    return 0;
}

// --- Helper Functions ---

// ฟังก์ชันรับค่า: ช่วยลด Code ที่ซ้ำกันใน main (CLO2)
void input_matrix(int rows, int cols, int matrix[rows][cols], char name) {
    printf("\nEnter elements for Matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c[%d][%d]: ", name, i, j);
            // CLO4: เช็ค return ของ scanf เพื่อความเสถียร (กัน User ใส่ตัวอักษร)
            if (scanf("%d", &matrix[i][j]) != 1) matrix[i][j] = 0; 
        }
    }
}

// ฟังก์ชัน Transpose: สลับแถวเป็นหลัก (Row <-> Column)
void transpose_matrix(int rows, int cols, int src[rows][cols], int dest[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dest[j][i] = src[i][j]; // สลับ index i และ j
        }
    }
}

// ฟังก์ชันคูณ Matrix: แยก Logic การคำนวณที่ซับซ้อนออกมา (CLO3)
void multiply_matrices(int rA, int cA, int cB, int A[rA][cA], int B[cA][cB], int C[rA][cB]) {
    for (int i = 0; i < rA; i++) {     // วนตามแถวของ A
        for (int j = 0; j < cB; j++) { // วนตามหลักของ B
            C[i][j] = 0;               // เริ่มต้นค่าผลลัพธ์เป็น 0
            
            // หาผลรวมผลคูณ (Dot Product)
            for (int k = 0; k < cA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// ฟังก์ชันแสดงผล
void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
