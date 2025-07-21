#include <stdio.h>

int score = 0 
;

void updateScore() {
    score = 100;
    printf("value in updateScore(): score = %d\n",score);
}

void showScore(){
    printf("value in showScore(): score = %d\n",score);
}

int main(){
    printf("initial value : score = %d\n", score);
    updateScore();
    showScore();
    return 0;
}