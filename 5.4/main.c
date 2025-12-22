#include <stdio.h>

#define NUM_STUDENTS 3


struct Student {
    int id;
    int score;
};


int find_max_score_id(struct Student students[], int *size , int *maxid);

int main() {
    int size = 3;
    struct Student class_data[NUM_STUDENTS];
    int top_student_id = 0;
    int i;

    
    printf("Enter data for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("--- Student %d ---\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &class_data[i].id);
        printf("Enter Score: ");
        scanf("%d", &class_data[i].score);
    }

    find_max_score_id(class_data,&size,&top_student_id);
    
    


    
    printf("\n--- STUDENT SCORE REPORT ---\n");
    printf("ID     | Score\n");
    printf("-------|-------\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%-6d | %d\n", class_data[i].id, class_data[i].score);
    }
    printf("\nTOP PERFORMER ID: %d\n", top_student_id);

    return 0;
}


int find_max_score_id(struct Student students[], int *size , int *maxid){
    int max = 0;
    for (int i = 0 ; i < *size ; i++) {
        if ((students[i].score) > max) {
            max = students[i].score;
            *maxid = students[i].id;
        }
    }
}