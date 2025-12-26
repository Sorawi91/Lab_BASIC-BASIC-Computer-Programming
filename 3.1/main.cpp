#include <stdio.h>

struct Product
{
    char name[50];
    int productId;
    float price;
};

int main()
{
//สร้างชื่อ struct item
    struct Product item;
    //รับค่าจากผู้ใช้เเละเพิ่มเข้าไปที่ struct 
    if (scanf("%d %f %s", &item.productId, &item.price, &item.name) != 3)
    {
        return 1;
    }
    //ปริ้นค่าที่อย่ใน struct
    printf("ID: %d,Price: %.2f, Name: %s", item.productId, item.price, item.name);

    return 0;
}
