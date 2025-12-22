#include <stdio.h>

struct Product {
    int item_id;
    float cost_price;
    float sell_price;
    int stock_quantity;
};


void calculate_total_profit(float cost, float sell, int qty, float *tprofit);
void calculate_profit_percentage(float cost, float sell, float *percent);

int main() {
    struct Product item;
    float total_profit = 0.00;
    float profit_percent = 0.00;

    
    printf("Enter Item ID: ");
    scanf("%d", &item.item_id);
    
    printf("Enter Cost Price per unit: ");
    scanf("%f", &item.cost_price);
    
    printf("Enter Sell Price per unit: ");
    scanf("%f", &item.sell_price);

    printf("Enter Stock Quantity: ");
    scanf("%d", &item.stock_quantity);

    calculate_total_profit(item.cost_price,item.sell_price,item.stock_quantity,&total_profit);

    calculate_profit_percentage(item.cost_price,item.sell_price,&profit_percent);

    printf("\n--- INVENTORY PROFIT REPORT ---\n");
    printf("Item ID: %d\n", item.item_id);
    printf("Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n", item.cost_price, item.sell_price, item.stock_quantity);
    printf("Total Profit: %.2f\n", total_profit);
    printf("Profit Percentage: %.2f%%\n", profit_percent);

    if (profit_percent >= 50.00) {
        printf("Status: Profit!");
    } else if (profit_percent < 50.00 && profit_percent != 0.00) {
        printf("Status: Loss!");
    } else {
        printf("Status: Break Even.");
    }

    return 0;
}

void calculate_total_profit(float cost, float sell, int qty, float *tprofit){
    *tprofit = ( sell - cost ) * qty;
}

void calculate_profit_percentage(float cost, float sell,float *percent){
    *percent = sell - cost;
}
