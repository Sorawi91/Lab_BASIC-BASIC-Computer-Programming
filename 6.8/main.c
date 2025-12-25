#include <stdio.h>
#define SIZE 5

void find_and_update(int *arr_ptr,int *search_value, int *new_value ,int *status);
void print_array(int array[], int size);

int main() {
    int numbers[SIZE];
    int search_val;
    int new_val;
    int stt = 0;
    int i;

    printf("Enter %d integer elements for the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    printf("\nEnter value to search (Search Value): ");
    scanf("%d", &search_val);
    printf("Enter new value to replace it with (New Value): ");
    scanf("%d", &new_val);

    
    printf("\n--- ARRAY UPDATE REPORT ---\n");
    printf("Array BEFORE Update: ");
    print_array(numbers, SIZE);

    find_and_update(numbers,&search_val,&new_val,&stt);
    
    printf("Array AFTER Update: ");
    print_array(numbers, SIZE);
    
    printf("Status: ");
    if (stt == 1) {
        printf("Update SUCCESSFUL.");
    } else {
        printf("Update FAILED (Value not found).");
    }

    return 0;
}


void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


void find_and_update(int *arr_ptr,int *search_value, int *new_value,int *status){
    for (int i = 0 ; i < SIZE ; i++) {
        if (arr_ptr[i] == *search_value) {
            arr_ptr[i] = *new_value;
            *status = 1;
        }
    }
}