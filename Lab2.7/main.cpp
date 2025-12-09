#include <stdio.h>

int main () {
    int N,i;
    int CFB = 0;
    int CF = 0;
    int CB = 0;
    int CO = 0;

    if (scanf("%d",&N) != 1) {
        return 0;
    }

    for (i = 1 ; i <= N ; i++) {

        if ((i % 3 == 0) && (i % 5 == 0) && (i % 15 == 0)) {
            CFB = CFB + 1;
        } else if (i % 3 == 0) {
            CF = CF + 1;
        } else if (i % 5 == 0) {
            CB = CB + 1;
        } else {
            CO = CO + 1;
        }
    }

    printf("Count FizzBuzz (by 15): %d\n",CFB);
    printf("Count Fizz (by 3 only): %d\n",CF);
    printf("Count Buzz (by 5 only): %d\n",CB);
    printf("Count other: %d\n",CO);
    
    return 0;
}