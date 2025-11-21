// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int num;
    int evenSums = 0 ;

    int oddSums =  0;
    
        printf("input number (0 to stop):\n");

    if (scanf("%d", &num) != 1) {
        return 1;
    }
 
    while (num != 0) {
        // ... Logic goes here ...

            if (num % 2 == 0) {
            evenSums += num ; //ถ้า condition เป็นจริงให้นำ number ไปเก็บใน evenSum
        } else {
            oddSums +=  num; //ถ้า condition ไม่เป็นจริงก็ให้ number ไปเก็บใน oddSum
        }

        
        if (scanf("%d", &num) != 1) {
            break; 
        }
    }

        printf("Evens Sum: %d\n", evenSums);
    printf("Odds Sum: %d\n", oddSums);
    return 0;
}