#include <stdio.h>

struct Employee {
    int id;
    int gross_salary;
    int bonus;
    int total_income;
};

// Prototype: ฟังก์ชันรับค่าและ Return ค่ากลับเป็น int ตามโจทย์
int calculate_net_salary(int total_income);

int main() {
    struct Employee emp;
    int net_salary;
    
    // 1. รับค่าและเช็คความถูกต้อง (แยกบรรทัดเพื่อแก้ CLO3)
    printf("Enter Employee ID: ");
    if (scanf("%d", &emp.id) != 1) 
    {
        return 1;
    }
    
    printf("Enter Gross Salary: ");
    if (scanf("%d", &emp.gross_salary) != 1) 
    {
        return 1;
    }
    
    printf("Enter Bonus: ");
    if (scanf("%d", &emp.bonus) != 1) 
    {
        return 1;
    }

    // คำนวณรายได้รวม
    emp.total_income = emp.gross_salary + emp.bonus;

    // 2. เรียกฟังก์ชันและรับค่า Return มาเก็บไว้
    net_salary = calculate_net_salary(emp.total_income);

    // 3. แสดงผลรายงาน
    printf("\n--- EMPLOYEE SALARY REPORT ---\n");
    printf("ID: %d\n", emp.id);
    printf("Gross Salary: %d\n", emp.gross_salary);
    printf("Bonus: %d\n", emp.bonus);
    printf("Total Income: %d\n", emp.total_income);
    printf("Net Salary: %d\n", net_salary);

    return 0;
}

// ฟังก์ชันคำนวณภาษีและส่งคืนรายได้สุทธิ
int calculate_net_salary(int total_income) {
    double tax_amount;

    // Logic: รายได้เกิน 30,000 เสียภาษี 10% ถ้าน้อยกว่าเสีย 5%
    if (total_income > 30000) 
    {
        tax_amount = total_income * 0.10;
    } 
    else 
    {
        tax_amount = total_income * 0.05;
    }

    // ส่งคืนค่าสุทธิ (รายได้รวม - ภาษีที่แปลงเป็นจำนวนเต็ม)
    return total_income - (int)tax_amount;
}
