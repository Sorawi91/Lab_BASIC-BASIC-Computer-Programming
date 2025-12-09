#include <stdio.h>

int main () {
    int N , i ; 
    int sdID , score , ttc , asc;
    float atdpc;
    int pc = 0;
    int fc = 0;

    printf("Number for Loop student score: ");
    
    if (scanf("%d",&N) != 1) {
        return 0;
    }

    for (i = 0 ; i < N ; i++) {

        printf("Enter studentId , score , totalClasses absentClasses for student [%d] ",i+1);
        if (scanf("%d %d %d %d",&sdID,&score,&ttc,&asc) != 4){
            printf("Error pls try again");
            return 0;
        }

        atdpc = (float)(ttc - asc) / ttc * 100.0;

        if (score >= 50 && atdpc >= 75.0) {
            printf("PASS ");
            pc++;
        } else {
            printf("FAIL ");
            fc++;
        }

        if (score < 50 && atdpc < 75.00) { 
            printf("Both Score and Attendance low\n");
        } else if (score < 50) {
            printf("Score is too low\n");
        } else {
            printf("Low Attendance(%.2f)%\n",atdpc);
        }

    }

    printf("\n--- Summary ---\n");
    printf("Total Pass: %d\n", pc);
    printf("Total Fail: %d\n", fc);

    return 0;
}
