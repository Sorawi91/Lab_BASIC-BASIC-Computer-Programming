#include <stdio.h>

int main() {
    FILE *fptr;
    char FILENAME[] = "output_data.txt";
    int year = 2025;
    
    fptr = fopen(FILENAME,"w");
    
    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for writing.\n",FILENAME);
        
    }
 
    fprintf(fptr,"Hello, C File Handling is easy.\n%d",year);

    printf("--- FILE WRITING PROCESS ---\n");
    printf("Writing data to %s...\n",FILENAME);

    printf("File writing complete.\n");
    printf("\n--- FILE OPERATION REPORT ---\n");
    printf("Action: File created and data written successfully.\n");
    printf("Filename: %s\n",FILENAME);

    fclose(fptr);
    return 0;
}