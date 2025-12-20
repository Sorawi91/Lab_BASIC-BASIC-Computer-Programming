#include <stdio.h>

struct Student{
    char name[50];
    int studentid;
    float score;
};

int main () {
    int N,i;
    float totolscore = 0.00;
    float AVR = 0.00;

    if (scanf("%d",&N) != 1) {
        return 0;
    }

    struct Student Students[N]; 

    for (i = 0 ; i < N ; i++){
        if (scanf("%d %f %s",&Students[i].studentid,&Students[i].score,&Students[i].name) != 3) {
            break;
        }
        
        totolscore += Students[i].score;
        
    }
    
    AVR = totolscore / N;
    if (AVR > 0) {
        printf("Average Score: %.2f",AVR);
    } else {
        printf("Average Score: %.2f",0.00);
    }
    return 0;
}
