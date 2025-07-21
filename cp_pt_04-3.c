#include <stdio.h>

int main(){
     char nameintitial = 'S'; //char เก็บค่าตัวอักษรตัวเดียว
     int age = 19; //int เก็บค่าเลขจำนวนเต็ม
     float weight = 71.8f; //float เก็บค่าตัวแปรที่เป็นเลขทศนิยม
    char gender [] = "Male"; //Char [] เก็บค่าข้อความ

    printf("nameintitial = %c\n", nameintitial); //%c แสดงตัวอักษร \n เปลี่ยนบรรทัด
    printf("age = %d\n", age);//%d แสดงเลขจำนวนเต็ม \n เปลี่ยนบรรทัด
    printf("weight = %.2f\n", weight);//%.2f แสดงเลขทศนิยมสองตำแหน่ง \n เปลี่ยนบรรทัด
    printf("gender = %s\n", gender);//%s แสดงข้อความ \n เปลี่ยนบรรทัด
    return 0 ;//จบการทำงาน
} 
