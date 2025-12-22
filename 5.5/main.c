#include <stdio.h>

#define NUM_STUDENTS 4

struct Student {
    int id;
};

int check_id_existence(struct Student students[], int *size, int *search_id,int *Found);

int main() {
    int num = 4;
    struct Student id_list[NUM_STUDENTS];
    int search_id;
    int found_status = 0;
    int i;

    
    printf("Enter IDs for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d ID: ", i + 1);
        scanf("%d", &id_list[i].id);
    }
    
    printf("\nEnter ID to search: ");
    scanf("%d", &search_id);

    check_id_existence(id_list,&num,&search_id,&found_status);
    
    printf("\n--- ID SEARCH REPORT ---\n");
    printf("Recorded IDs: ");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", id_list[i].id);
    }
    printf("\n");
    printf("Search ID: %d\n", search_id);

    if (found_status == 1) {
        printf("ID FOUND int the system");
    } else if (found_status == 0) {
        printf("ID NOT FOUND in the system");
    }

    return 0;
}


int check_id_existence(struct Student students[], int *size, int *search_id ,int *Found){
    for (int i = 0 ; i < *size ; i++) {
        if ((students[i].id) == *search_id) {
            *Found = 1;
        }
    }
}

