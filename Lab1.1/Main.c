#include <stdio.h>

int main() {

    int N, i;

    printf("Please input your number you want: ");

    if (scanf("%d", &N) != 1 || N <= 0 ) {
        printf("Error");
        return 1; // Handle input failure
    }

    // TODO: Implement the for loop to print the message N times

    for(i = 0 ; i < N ; i++){
        printf("Hello Loop!\n");
    }

    return 0;
}
