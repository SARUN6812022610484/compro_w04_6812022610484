#include <stdio.h>

void functionB() {
     int value = 99;
     printf("value in functionB: %d\n", value);
}

int main(){
    int value = 42;
    printf("value in main (before):%d\n ", value);

    functionB();
    printf("value in main (after): %d\n",value);
    return 0;
}