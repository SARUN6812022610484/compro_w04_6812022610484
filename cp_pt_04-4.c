#include <stdio.h>

void countCall() {
    int counter = 0;
    static int counter_2 = 0;
    printf("call funtion: normal counter: %d\n", counter);
    printf("call funtion: static counter: %d\n", counter_2);
}

int main(){
    countCall();
    printf("after frist call:\n");
    countCall();
    return 0 ;
}