#include <stdio.h>

//กำหนดให้เป็นหมวดหมู่โดยมีเเยกย่อยข้างใน
struct Product { 
    char name[50];
    int productId;
    float price;
};

int main() {
    //ต้องเรียกเเม่เเบบ เเละตามด้วยชื่อที่ต้องการ
    struct Product item; 

    //สามารถเข้าถึงได้โดยใช้ . เป็นตัวนำทาง
    if (scanf("%d %f %s", &item.productId, &item.price, &item.name) != 3) {
        return 1;
    }
    
    printf("ID: %d,Price: %.2f, Name: %s",item.productId,item.price,item.name);

    return 0;
}