#include <stdio.h>

// โครงสร้างสำหรับเก็บข้อมูลนักศึกษา
struct Student {
    int studentId;      
    // รหัสนักศึกษา
    float score;        
    // คะแนนสอบ
    char name[50];      
    // ชื่อนักศึกษา
};

int main() {

    int N;
    int i;

    // รับจำนวนนักศึกษา
    scanf("%d", &N);

    // ประกาศตัวแปรโครงสร้างข้อมูลนักศึกษา
    struct Student students[N];

    // รับข้อมูลนักศึกษาแต่ละคน
    for (i = 0; i < N; i++) {
        scanf("%d %f %s",
              &students[i].studentId,
              &students[i].score,
              students[i].name);
    }

    // แสดงผลข้อมูลนักศึกษา
    for (i = 0; i < N; i++) {
        printf("ID: %d Score: %.2f Name: %s\n",
               students[i].studentId,
               students[i].score,
               students[i].name);
    }

    return 0;
}
