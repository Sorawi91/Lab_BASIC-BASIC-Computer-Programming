#include <stdio.h>

void print_matrix(int rows, int cols, int matrix[rows][cols]);

int main()
{
    int A_ROWS = 2, A_COLS = 3;
    int B_ROWS = 2, B_COLS = 3;

    int BT_ROWS = B_COLS;
    int BT_COLS = B_ROWS;
    int C_ROWS = A_ROWS;
    int C_COLS = BT_COLS;

    int A[A_ROWS][A_COLS];
    int B[B_ROWS][B_COLS];
    int BT[BT_ROWS][BT_COLS];
    int C[C_ROWS][C_COLS];
    int i, j, k;

    printf("Enter elements for Matrix A (2x3):\n");
    for (i = 0; i < A_ROWS; i++)
    {
        for (j = 0; j < A_COLS; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (2x3):\n");
    for (i = 0; i < B_ROWS; i++)
    {
        for (j = 0; j < B_COLS; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < B_ROWS; i++)
    {
        for (j = 0; j < B_COLS; j++)
        {
            BT[j][i] = B[i][j];
        }
    }

    for (i = 0; i < A_ROWS; i++)
    {
        for (j = 0; j < BT_COLS; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < A_COLS; k++)
            {
                C[i][j] += A[i][k] * BT[k][j];
            }
        }
    }

    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n");

    printf("\nMatrix A (2x3):\n");
    print_matrix(A_ROWS, A_COLS, A);

    printf("\nMatrix B (2x3):\n");
    print_matrix(B_ROWS, B_COLS, B);

    printf("\nMatrix B Transposed (BT, 3x2):\n");
    print_matrix(BT_ROWS, BT_COLS, BT);

    printf("\nResult Matrix C (A x BT, 2x2):\n");
    print_matrix(C_ROWS, C_COLS, C);

    return 0;
}

void print_matrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
