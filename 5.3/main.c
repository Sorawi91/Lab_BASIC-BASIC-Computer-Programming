#include <stdio.h>

void calculate_sum(int array[], int *size,int *total);

int main() {
    int SIZE = 5;
    int numbers[SIZE];
    int total_sum = 0;
    float average;
    int i;
    

    
    printf("Enter %d integer numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    calculate_sum(numbers,&SIZE,&total_sum);
    
    

    
    average = (float)total_sum / SIZE;


    
    printf("\n--- ARRAY AVERAGE REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Total Sum: %d\n", total_sum);
    printf("Average: %.2f\n", average);

    return 0;
}

void calculate_sum(int array[], int *size,int *total){
      for (int i = 0 ; i < *size ; i++) {
        *total = *total + array[i];
      }
      printf("%d",*total);
}

