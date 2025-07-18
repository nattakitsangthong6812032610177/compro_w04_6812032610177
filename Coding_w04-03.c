#include <stdio.h>

int main() {
    // Declare and initialize variables
    char nameInitial = 'N';      // First letter of the name
    int age = 18;                // Age in full number
    float weight = 86.00;        // Weight with one decimal place
    char gender[] = "Male";      // Gender

    // Display the values
    printf("Initial: %c\n", nameInitial);
    printf("Age: %d\n", age);
    printf("Weight: %.2f\n", weight);
    printf("Gender: %s\n", gender);

    return 0;
}
//char nameInitial = 'N'; → ใช้ ' ' เพราะเป็นตัวอักษรเพียง 1 ตัว
//char gender[] = "Male"; → ใช้ array of char เพื่อเก็บข้อความ
//.2f ใน printf ทำให้แสดงทศนิยม 2 ตำแหน่ง
//คอมเมนต์ทุกบรรทัดเป็นภาษาอังกฤษตามที่ขอ