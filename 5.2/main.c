#include <stdio.h>

struct Employee {
    int id;
    int gross_salary;
    int bonus;
    int total_income;
};

// Prototype: รับ pointer เพื่อคำนวณและส่งค่ากลับ
void calculate_net_salary(int *total_income, int *net);

int main() {
    struct Employee emp;
    int net_salary;
    
    // 1. รับข้อมูล (เพิ่มการเช็ค scanf เพื่อความเสถียร CLO4)
    printf("Enter Employee ID: ");
    if (scanf("%d", &emp.id) != 1) return 1;
    
    printf("Enter Gross Salary: ");
    if (scanf("%d", &emp.gross_salary) != 1) return 1;
    
    printf("Enter Bonus: ");
    if (scanf("%d", &emp.bonus) != 1) return 1;

    // คำนวณรายได้รวม
    emp.total_income = emp.gross_salary + emp.bonus;

    // 2. เรียกฟังก์ชันคำนวณสุทธิ (ส่ง address ไป)
    calculate_net_salary(&emp.total_income, &net_salary);

    // 3. แสดงผลรายงาน
    printf("\n--- EMPLOYEE SALARY REPORT ---\n");
    printf("ID: %d\n", emp.id);
    printf("Gross Salary: %d\n", emp.gross_salary);
    printf("Bonus: %d\n", emp.bonus);
    printf("Total Income: %d\n", emp.total_income);
    printf("Net Salary: %d\n", net_salary);

    return 0;
}

// ฟังก์ชันคำนวณรายได้สุทธิ
void calculate_net_salary(int *total_income, int *net) {
    double tax_amount;

    // CLO3: อธิบาย Logic การคิดภาษี (Why?)
    // ถ้ารายได้รวมเกิน 30,000 บาท ต้องเสียภาษี 10%
    if (*total_income > 30000) {
        tax_amount = *total_income * 0.10;
    } 
    // ถ้ารายได้ไม่ถึงเกณฑ์ เสียภาษีแค่ 5%
    else {
        tax_amount = *total_income * 0.05;
    }

    // คำนวณรายได้สุทธิ = รายได้รวม - ภาษี (แปลงเป็น int)
    *net = *total_income - (int)tax_amount;
}
