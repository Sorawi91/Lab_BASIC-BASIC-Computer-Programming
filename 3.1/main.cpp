#include <stdio.h>

struct Product
{
    char name[50];  // เก็บชื่อสินค้า
    int productId;  // เก็บรหัสสินค้า
    float price;    // เก็บราคา
};

int main()
{
    // 1. ประกาศตัวแปร item ชนิด struct Product
    struct Product item;

    // 2. รับค่า 3 ตัว (รหัส, ราคา, ชื่อ) ใส่ลงใน struct
    // หมายเหตุ: item.name เป็น Array อยู่แล้ว ไม่ต้องใส่ & นำหน้า
    if (scanf("%d %f %s", &item.productId, &item.price, item.name) != 3)
    {
        return 1; // ถ้ารับค่าไม่ครบ 3 ตัว ให้จบโปรแกรม
    }

    // 3. ดึงค่าจาก struct มาแสดงผล
    printf("ID: %d, Price: %.2f, Name: %s", item.productId, item.price, item.name);

    return 0;
}
