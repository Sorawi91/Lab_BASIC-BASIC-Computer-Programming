// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int number;
    int evenSum = 0;
    int oddSum = 0;
    
    printf("Enter numbers (0 to stop):\n");

    // รับค่าตัวเลขตัวแรกก่อนเริ่มลูป
    if (scanf("%d", &number) != 1) {
        return 1;
    }
 
    // TODO: Implement the while loop and the if-else logic for even/odd accumulation
    while (number != 0) {
        // ... Logic goes here ...

        if (number % 2 == 0) {
            evenSum += number; //ถ้า condition เป็นจริงให้นำ number ไปเก็บใน evenSum
        } else {
            oddSum += number; //ถ้า condition ไม่เป็นจริงก็ให้ number ไปเก็บใน oddSum
        }

        // ต้องรับค่าตัวเลขถัดไปที่ท้ายลูป
        if (scanf("%d", &number) != 1) {
            break; 
        }
    }

    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);
    return 0;
}