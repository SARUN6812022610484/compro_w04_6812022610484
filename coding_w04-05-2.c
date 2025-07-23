#include <stdio.h>

void countcall(){
    int counter = 0;
    counter++;
    printf("Call Function: Counter = %d \n",counter);
}

int main(){
    printf("Starting funtion call...\n");
    countcall();
    printf("After first call:\n");
    countcall();
    return 0 ;
}
//1.ผลลัพธ์ของ 05-1 จะนับ 1,2 ส่วนของ 05-2 จะนับเลข 1 ซ้ำ เพราะ 05-2 ใช้้ Non-static จึงทำให้ค่าถูกรีเซทใหม่เมื่อเรียกใช้ 
//2.ความแตกต่างของ static และ Non-static คือ static จะเก็บค่าเดิมมาใช้ระหว่างเรียกใช้ครั้งถัดไป แต่ Non จะรีเซ็ทค่าใหม่ทุกครั้ง
//3.สรุป static จะใช้เมื่อ ต้องการนำค่าเดิมกลับมาใช้ต่อ ส่วน Non-static จะใช้เมื่อ ต้องการเริ่มต้นใหม่ทุกครั้งที่เรียกใช้