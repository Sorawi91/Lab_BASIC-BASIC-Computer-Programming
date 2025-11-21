// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int number;

    // TODO: Implement the do-while loop structure for validation
    do {
        printf("Enter a number (1-10): ");

        if (scanf("%d", &number) != 1) {
            break; 
        }

        if (number < 1 || number > 10){
            printf("Error: Value must be 1-10.\n\n");
        }
        

        // TODO: Implement the error message print inside the loop if validation fails

    } while (number < 1 || number > 10); //ถ้าอยู่ในช่วง 1-10 จะออกจากลูป
        printf("Input accepted: %d", number);

    return 0;

}