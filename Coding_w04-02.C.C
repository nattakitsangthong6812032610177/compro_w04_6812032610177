#include <stdio.h>  // Include standard input/output library

int main() {
    int a = 10;  // Declare an integer variable 'a' and assign it the value 10
    printf("a = %d", a);  // Print the value of 'a' using format specifier %d
    return 0;  // Return 0 to indicate successful execution
}
//แก้ไขคำสั่ง include stdio.h เป็น #include <stdio.h> เพื่อให้คอมไพล์ได้
//เพิ่มเครื่องหมาย ; ที่บรรทัด return 0; เพื่อให้ถูกต้องตาม Syntax ของ C
//คอมเมนต์ในแต่ละบรรทัดอธิบายว่าแต่ละคำเป็น Token ชนิดใด (Keyword, Identifier, Con