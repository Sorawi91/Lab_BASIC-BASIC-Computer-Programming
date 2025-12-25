#include <stdio.h>

void calculate_win_odds(int *CO ,float *win,int *stu);

int main() {
    int card_outs; 
    float win_probability;
    int status;

    card_outs = 10; 

    calculate_win_odds(&card_outs,&win_probability,&status);
    
    printf("\n--- POKER PROBABILITY REPORT (2 Cards Remaining) ---\n");
    printf("Calculated Outs: %d\n", card_outs);
    printf("Win Probability (Odds x 4): %.2f%%\n", win_probability);
    
    printf("Assessment: ");

    if (status == 1) {
        printf("HIGH Win Probalilyty");
    } else {
        printf("LOW Win Probalility");
    }

    return 0;
}

void calculate_win_odds(int *CO ,float *win,int *stu){
     *win = *CO * 4;

     if (*win >= 30.00) {
        *stu = 1;
     } else {
        *stu = 0;
     }
}
