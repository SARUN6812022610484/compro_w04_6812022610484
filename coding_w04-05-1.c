#include <stdio.h>

void countcall(){
    static int counter = 0;
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
// static variable