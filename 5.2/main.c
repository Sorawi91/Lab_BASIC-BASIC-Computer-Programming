#include <stdio.h>

struct Employee {
    int id;
    int gross_salary;
    int bonus;
    int total_income;
};


void calculate_net_salary(int *total_income , int *net);

int main() {

    struct Employee emp;
    int net_salary;
    
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    
    printf("Enter Gross Salary: ");
    scanf("%d", &emp.gross_salary);
    
    printf("Enter Bonus: ");
    scanf("%d", &emp.bonus);

    emp.total_income = emp.gross_salary + emp.bonus;

    calculate_net_salary(&emp.total_income,&net_salary);
    printf("\n--- EMPLOYEE SALARY REPORT ---\n");
    printf("ID: %d\n", emp.id);
    printf("Gross Salary: %d\n", emp.gross_salary);
    printf("Bonus: %d\n", emp.bonus);
    printf("Total Income: %d\n", emp.total_income);
    printf("Net Salary: %d\n", net_salary);

    return 0;
}


void calculate_net_salary(int *total_income , int *net){
    double tax_amount;
    if (*total_income > 30000) {
        tax_amount = *total_income * 0.10;
    } else {
        tax_amount = *total_income * 0.05;
    }
    *net = *total_income - (int)tax_amount;
}
