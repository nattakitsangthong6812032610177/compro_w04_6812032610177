#include <stdio.h>

const int GLOBAL_RATE = 10;  // Global constant

void calculate() {
    const int LOCAL_BONUS = 50;  // Local constant
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    // printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);  // Error! LOCAL_BONUS ไม่สามารถเรียกใช้ใน main ได้

    return 0;
}
//ค่าที่ GLOBAL_RATE และ LOCAL_BONUS เท่ากันอย่างไร?
//ทั้งคู่เป็นค่าคงที่ (const) คือไม่สามารถเปลี่ยนค่าได้หลังจากประกาศ
//GLOBAL_RATE ประกาศที่ระดับ global สามารถใช้ได้ทั่วโปรแกรม
//LOCAL_BONUS ประกาศในฟังก์ชัน calculate() ใช้ได้แค่ภายในฟังก์ชันนั้นเท่านั้น

//เกิดอะไรขึ้นถ้าเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80;?
//จะเกิด compile-time error เพราะ const ห้ามแก้ไขค่า
//ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ที่ main() ได้?
//เพราะ LOCAL_BONUS เป็นตัวแปร local อยู่ในฟังก์ชัน calculate() จึงมี scope จำกัดแค่ในฟังก์ชันนั้น ไม่สามารถเข้าถึงนอกฟังก์ชันได้

//สรุปผลที่ได้จากการทดลอง
//ตัวแปร const เป็นค่าคงที่ ไม่สามารถเปลี่ยนแปลงค่าได้
//const ในระดับ global สามารถใช้ได้ทุกที่ในโปรแกรม
//const ในระดับ local มีขอบเขตการใช้งานเฉพาะในฟังก์ชันที่ประกาศเท่านั้น
//การแก้ไขค่าของ const จะทำให้เกิดข้อผิดพลาดในขั้นตอนคอมไพล์