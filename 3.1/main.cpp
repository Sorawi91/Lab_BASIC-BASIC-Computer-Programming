#include <stdio.h>

/* โครงสร้างข้อมูลสินค้า */
struct Product
{
    char name[50];
    int productId;
    float price;
};

int main(void)
{
    struct Product item;

    /* รับข้อมูลสินค้า */
    if (scanf("%d %f %49s",
              &item.productId,
              &item.price,
              item.name) != 3)
    {
        return 1;
    }

    /* แสดงผลข้อมูลสินค้า */
    printf("ID: %d\n", item.productId);
    printf("Price: %.2f\n", item.price);
    printf("Name: %s\n", item.name);

    return 0;
}
