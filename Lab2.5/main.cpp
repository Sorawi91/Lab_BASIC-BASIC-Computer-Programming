#include <stdio.h>

int main () {
    int score , CountA = 0 , CountB = 0 , CountC = 0 , CountD = 0 , CountF = 0 , i = 0;

    while (score != (-1)) {
        printf("Enter your Score [%d]: ",i+1);

        if (scanf("%d",&score) != 1) {
            printf("Pleses try again");
            break;
        } else if (score >= 80) {
            CountA += 1;
        } else if (score >= 70) {
            CountB += 1;
        } else if (score >= 60) {
            CountC += 1;
        } else if (score >= 50) {
            CountD += 1;
        } else if (score < 50 && score != (-1)) { // socre ต้องมีค่าน้อยกว่า 50 เเละ ต้อง ไม่เท่ากับ -1 ถึงจะทำงานในบรรทัดต่อไป
            CountF +=1;
        }
        i++;
    }
    if (score == (-1)) {
        printf("Grade A Count: %d\n",CountA);
        printf("Grade B Count: %d\n",CountB);
        printf("Grade C Count: %d\n",CountC);
        printf("Grade D Count: %d\n",CountD);
        printf("Grade F Count: %d\n",CountF);
    }
}