#include <stdio.h>

struct Student {
    int id;
    int math_score;
    int science_score;
    int english_score;
    int total_score;
};


void calculate_grade(int total_score);
void calculate_average(int total_score, float *avg);

int main() {
    struct Student student_info;
    float average = 0.00;

    
    printf("Enter Student ID: ");
    scanf("%d", &student_info.id);
    
    printf("Enter Math Score (out of 100): ");
    scanf("%d", &student_info.math_score);
    
    printf("Enter Science Score (out of 100): ");
    scanf("%d", &student_info.science_score);

    printf("Enter English Score (out of 100): ");
    scanf("%d", &student_info.english_score);

    
    student_info.total_score = student_info.math_score + student_info.science_score + student_info.english_score;
    
    calculate_average(student_info.total_score,&average);

    printf("\n--- STUDENT ACADEMIC REPORT ---\n");
    printf("Student ID: %d\n", student_info.id);
    printf("Math Score: %d, Science Score: %d, English Score: %d\n", student_info.math_score, student_info.science_score, student_info.english_score);
    printf("Total Score: %d\n", student_info.total_score);
    printf("Average Score: %.2f\n", average);
    calculate_grade(student_info.total_score);

    return 0;
}

void calculate_grade(int total_score){
    if (total_score >= 250) {
        printf("Grade A");
    } else if (total_score >= 200) {
        printf("Grade B");
    } else {
        printf("Grade C");
    }
}

void calculate_average(int total_score, float *avg){
    printf("%d",total_score);
    *avg = total_score / 3;
}