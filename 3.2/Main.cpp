#include <stdio.h>

//กำหนดให้เป็นหมวดหมู่โดยมีเเยกย่อยข้างใน
struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {
    int N, i;
    
    
    if (scanf("%d",&N) != 1) {
        return 1;
    }

     //ต้องเรียกเเม่เเบบ เเละตามด้วยชื่อที่ต้องการ
    struct Student students[N];
    
     //สามารถเข้าถึงได้โดยใช้ . เป็นตัวนำทาง
    for (i = 0; i < N; i++) {
        
        if (scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name) != 3) {
            return 1;
        }
    }
    
     //สามารถเข้าถึงได้โดยใช้ . เป็นตัวนำทาง
    for (i = 0; i < N; i++) {
        printf("ID: %d,Score: %.2f,Name: %s\n",students[i].studentId, students[i].score, students[i].name);
    }

    return 0;
}
