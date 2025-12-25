#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "input_data.csv";
    int num1, num2, num3, num4, num5;
    int total_sum = 0;
    
    fptr = fopen(filename,"r");
    
    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for reading. Make sure the file exists.\n", filename);
        return 1;
    }

    fscanf(fptr,"%d,%d,%d,%d,%d",&num1,&num2,&num3,&num4,&num5);

    total_sum = num1 + num2 + num3 + num4 + num5;

     fclose(fptr);

    printf("--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", filename);
    
    printf("File reading complete.\n");
    
    printf("\n--- DATA ANALYSIS REPORT ---\n");
    printf("Data read: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("Total Sum: %d\n", total_sum);
    
    return 0;
}