#include <stdio.h>

void invest (int *termCode, float *investmentAmount, float *Amount);

int main () {
    int tC;
    float imA, aM;

    printf("plsese input termCode and investmentAmount: ");
    if (scanf("%d%f", &tC, &imA) != 2) {
        printf("Erorr Pleses Try Again");
        return 1;
    }

    invest(&tC, &imA, &aM);
    return 0;
}

void invest (int *termCode, float *investmentAmount, float *Amount) {

    switch (*termCode) {
    case 1: {
        if (*investmentAmount < 5000) {
            float vat = 0.03;
            *Amount = *investmentAmount * vat;
            printf("%.2f", *Amount);
        }
        else if (*investmentAmount >= 5000) {
            float vat = 0.04;
            *Amount = *investmentAmount * vat;
            printf("%.2f", *Amount);
        }
    }
    break;

    case 2: {
        if (*investmentAmount < 10000) {
            float vat = 0.05;
            *Amount = *investmentAmount * vat;
            printf("%.2f", *Amount);
        }
        else if (*investmentAmount >= 5000) {
            float vat = 0.065;
            *Amount = *investmentAmount * vat;
            printf("%.2f", *Amount);
        }
    }
    break;

    case 3: {
        float vat = 0.08;
        *Amount = *investmentAmount * vat;
        printf("%.2f", *Amount);
    }
    break;

    default: {
        printf("Invalid Term Code");
    }
    break;
    }
}

//becuse i need to try to use funtion.make me never fogot how to use.
