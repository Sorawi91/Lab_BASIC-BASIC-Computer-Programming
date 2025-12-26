#include <stdio.h>

int main()
{
    //กำหนดตัวเเปรต่างๆ
    int i;
    int SIZE = 5;
    int numbers[SIZE];
    int even_count = 0;
    int odd_count = 0;
//ลูปขนาดของ size เเละรับค่าไปที่ number
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter integer number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
//ปริ้นผลลัพธ์
    printf("\n--- NUMBER CLASSIFICATION REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Total Even Numbers Found: %d\n", even_count);
    printf("Total Odd Numbers Found: %d\n", odd_count);

    return 0;
}
