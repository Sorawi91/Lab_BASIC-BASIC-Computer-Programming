#include <stdio.h>

int main() {
    int N;

    printf("Please input your number you want: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Error");
        return 0;
    }

    for (int i = 0; i < N; i++) {
        printf("Hello Loop!\n");
    }

    return 0;
}
