// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    // เปลี่ยนชื่อตัวแปรให้สั้นลง (AI ชอบตั้งชื่อยาวๆ)
    int n; 
    int sum_e = 0; // sum even
    int sum_o = 0; // sum odd
    
    printf("Enter numbers (0 to stop):\n");

    // รับค่าตัวแรก
    if (scanf("%d", &n) != 1) {
        return 1;
    }
 
    while (n != 0) {
        // เช็คเลขคู่ (หาร 2 แล้วเหลือเศษ 0)
        if (n % 2 == 0) {
            // เขียนแบบเต็ม ไม่ใช้ += ดูเป็นเด็กนักเรียนกว่า
            sum_e = sum_e + n; 
        } 
        else {
            // ถ้าไม่ใช่คู่ ก็เป็นคี่
            sum_o = sum_o + n;   
        }

        // รับค่าตัวถัดไป
        if (scanf("%d", &n) != 1) {
            break; 
        }
    }

    // แสดงผล
    printf("Even Sum: %d\n", sum_e);
    printf("Odd Sum: %d\n", sum_o);
    return 0;
}