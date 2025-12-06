#include <stdio.h>

int main()
{
    int n;

    printf("Pls Fill Number: ");
    
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        printf("[%d] Hello world\n",i+1);
    }
}