#include <stdio.h>

void countCall() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
//ผลลัพธ์ที่ได้ต่างกันอย่างไร? เพราะเหตุใด?
//static int counter จะเก็บค่าต่อเนื่องไม่ถูกรีเซ็ตเมื่อตอนเรียกใช้ฟังก์ชันครั้งถัดไป
//int counter ธรรมดา จะเริ่มนับใหม่ทุกครั้งเพราะตัวแปรถูกสร้างใหม่เสมอเมื่อฟังก์ชันถูกเรียก

//ความแตกต่างของ Non-Static Variable?
//Non-static variable จะถูกสร้างและทำลายทุกครั้งที่ฟังก์ชันทำงานเสร็จ
//ค่าของมันจะไม่ถูกเก็บไว้ข้ามการเรียกใช้ฟังก์ชัน

//สรุปผลที่ได้จากการทดลอง
//ตัวแปร static เหมาะกับการเก็บสถานะหรือข้อมูลที่ต้องการรักษาค่าระหว่างการเรียกฟังก์ชันหลายครั้ง
//ตัวแปร non-static เหมาะกับค่าชั่วคราวที่ใช้แค่ครั้งเดียวในฟังก์ชันนั้น
