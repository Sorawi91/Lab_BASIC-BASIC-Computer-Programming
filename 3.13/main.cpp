#include <stdio.h>

int main() {
    char text[101],c,d,z,x; 
    int countUpper = 0;
    int countLower = 0;
    int countDigit = 0;
    int countOther = 0;
    int i;
    
    if (scanf("%s", text) != 1) { 
        return 1;
    }
    
    
    for (i = 0; text[i] != '\0'; i++) {

    int other = 0; 
        //เช็ค A-Z
        for (c = 'A' ;c <= 'Z' ; c++) {
            if (text[i] == c) {
                countUpper += 1;
                other++;
                break;
            }
        } 
        //เช็ค a-z
        for (d = 'a' ;d <= 'z' ; d++) {
            if (text[i] == d) {
                countLower += 1;
                other++;
                break;
            }
        }
        //เช็ค 0-9
        for (x = '0' ;x <= '9' ; x++) {
            if (text[i] == x) {
                countDigit += 1;
                other++;
                break;
            }
        }
        //เเต่ในล่ะตัวอักษรถ้าพบให้ other + 1 เเต่ถ้าไม่พบเลยก็ให้เป็นตัวอักษรพิเศษ
        if (other == 0) {
            countOther += 1;
        }

    }
    
    printf("Uppercase: %d\n", countUpper);
    printf("Lowercase: %d\n", countLower);
    printf("Digits: %d\n", countDigit);
    printf("Special/Other: %d\n", countOther);
    return 0;
}