#include <stdio.h>

void GetSet(int d[] , int *n);

int main () {
    int *data , num; 
    GetSet(data,&num);
    return 0;
}

void GetSet(int d[] , int *n) {
    
    printf("Pls Fill number of member: ");
    
    scanf("%d", n);

    for (int i = 0 ; i < *n ; i++) {

        printf("data of member [%d] : ",i+1);

        scanf("\n%d",&d[i]);
    }
}