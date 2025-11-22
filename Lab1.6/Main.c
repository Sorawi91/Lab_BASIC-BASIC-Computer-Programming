#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a number (1-10): ");

        if (scanf("%d", &number) != 1) {
            break; 
        }

        if (number < 1 || number > 10){
            printf("Error: Value must be 1-10.\n\n");
        }

    } while (number < 1 || number > 10); 
        printf("Input accepted: %d", number);

    return 0;

}