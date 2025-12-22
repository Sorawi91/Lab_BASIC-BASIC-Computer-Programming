#include <stdio.h>

#define NUM_EMPLOYEES 4


struct Employee {
    int id;
    int salary;
};


void find_min_max_salary(struct Employee emps[], int *size, int *max, int *min);

int main() {
    int num = 4;
    struct Employee staff_data[NUM_EMPLOYEES];
    int max_salary = 0;
    int i;

    
    printf("Enter data for %d employees:\n", NUM_EMPLOYEES);
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("--- Employee %d ---\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &staff_data[i].id);
        printf("Enter Salary: ");
        scanf("%d", &staff_data[i].salary);
    }

    int min_salary = staff_data[0].salary;

    find_min_max_salary(staff_data,&num,&max_salary,&min_salary);

    printf("\n--- EMPLOYEE SALARY SUMMARY ---\n");
    printf("ID     | Salary\n");
    printf("-------|---------\n");
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("%-6d | %d\n", staff_data[i].id, staff_data[i].salary);
    }
    printf("\nMaximum Salary Found: %d\n", max_salary);
    printf("Minimum Salary Found: %d\n", min_salary);

    return 0;
}


void find_min_max_salary(struct Employee emps[], int *size, int *max, int *min){
    for (int i = 0 ; i < *size ; i++) {
        if (emps[i].salary > *max) {
            *max = emps[i].salary;
        }
    }

    for (int i = 0 ; i < *size ; i++) {
        if (emps[i].salary <= *min) {
            *min = emps[i].salary;
        }
    }
}


