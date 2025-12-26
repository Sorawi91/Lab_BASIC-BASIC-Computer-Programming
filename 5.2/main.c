#include <stdio.h>

// 1. การสร้าง Struct ชื่อ Employee
struct Employee {
    int id;
    int gross_salary;
    int bonus;
    int total_income;
};

// ประกาศ Prototype ของฟังก์ชัน
int calculate_net_salary(int total_income);

int main() {
    // ประกาศตัวแปร structure และตัวแปรรับค่า net_salary
    struct Employee emp;
    int net_salary;

    // รับข้อมูล
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Gross Salary: ");
    scanf("%d", &emp.gross_salary);

    printf("Enter Bonus: ");
    scanf("%d", &emp.bonus);

    // คำนวณรายได้รวม (Total Income)
    emp.total_income = emp.gross_salary + emp.bonus;

    // เรียกใช้ Function calculate_net_salary โดยส่งค่า total_income เข้าไป
    net_salary = calculate_net_salary(emp.total_income); 

    // แสดงผลลัพธ์ (Report)
    printf("\n--- EMPLOYEE SALARY REPORT ---\n");
    printf("ID: %d\n", emp.id);
    printf("Gross Salary: %d\n", emp.gross_salary);
    printf("Bonus: %d\n", emp.bonus);
    printf("Total Income: %d\n", emp.total_income);
    printf("Net Salary: %d\n", net_salary);

    return 0;
}

// 4. การคำนวณภาษี (ภายใน Function)
int calculate_net_salary(int total_income) {
    double tax_amount; // ใช้ double เพื่อรองรับทศนิยมตอนคูณเปอร์เซ็นต์

    // เงื่อนไขการหักภาษี
    if (total_income > 30000) {
        tax_amount = total_income * 0.10; // หักภาษี 10%
    } else {
        tax_amount = total_income * 0.05; // หักภาษี 5%
    }

    // คำนวณเงินเดือนสุทธิ และ Type Casting กลับเป็น int ตามโจทย์สั่ง
    int net_result = (int)(total_income - tax_amount);
    
    return net_result;
}
