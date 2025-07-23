#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate(){
    const int LOCAL_BONUS = 50;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}
int main(){
    calculate();
     printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    
    return 0 ;
}
//1.GLOBAL_RATE อยู่นอกฟังก์ชั่นก็เลยใช้ได้ทุกที่ในโปรแกรม แต่ LOCAL_BONUS อยู่ในฟังก์ชั่น calculate ก็เลยใช้ได้แค่ในฟังก์ชั่นนั้นไม่สามารถใช้ข้างนอกได้
//2.