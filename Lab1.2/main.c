#include <stdio.h>

int main() {
    int score;

    printf("Pls Enter your score: ");
    

    if (scanf("%d", &score) != 1) {
        return 1;
    }
    

    if (score >= 80) {
        printf("Grade A\n");
    } else if (score >= 75) {
        printf("Grade B+\n");
    } else if (score >= 70) {
        printf("Grade B\n");
    } else if (score >= 65) {
        printf("Grade C+\n");
    } else if (score >= 60) {
        printf("Grade C\n");
    }  else if (score >= 55) {
        printf("Grade D+\n");
    } else if (score >= 50) {
        printf("Grade D\n");
    } else {
        printf("Grade F never give up bro\n");
    }

    return 0;
}